#ifndef _PPMP_TOKEN
#define _PPMP_TOKEN

#include "intl/cat.h"

/**
 * @brief 空参数宏，用于分隔别名（定义为宏名的参数宏）和展开别名使用的括号
 */
#define __empty__(...)

#define __true__(...) 1
#define __false__(...) 0

/**
 * @brief 当一个参数位传入一个','分隔的参数列表时，将该参数用此宏包围，如果需要将此列表作为一个整体传递给其他宏的单个参数，则在传入时需要将列表用此宏包围，即保留参数的列表性质
 * 		  原理：多个token以','为分隔符时，若将用()将这些token全部包围，则它们整体视作单个参数，因此可以将参数列表打包成单个参数。直接使用__VA_ARGS__是展开的，展开的每个参数都占一个参数位，如果不希望展开则使用__pack_list__(__VA_ARGS__)，其仍然只占一个参数位
 * 		  注意！当递归宏中使用__pack_list__()时，__pack_list__宏本身也必须要延迟展开，否则提前展开就不是打包了，而是作为多个参数依次传入，如M(x, y)中必须用
 * 		  __2_pass_alias__(__alias_M__)(x, __pack_list_deferred__(2)(1, 2))
 * 		  而不能用
 * 		  __2_pass_alias__(__alias_M__)(x, __pack_list__(1, 2))
 * 		  后者会提前展开导致参数不匹配。
 */
#define __pack_list__(...) __VA_ARGS__

/**
 * @brief 如果传入的是__pack_list__(a, b)类似的列表打包参数，则保留所有打包{a, b}，即打包作为整体占一个参数位，而不展开为a, b
 * 		  它虽然形式与__pack_list__()一致，但侧重含义不一样，__pack_list__()含义为将多个独立参数打包成一个整体，__forward__()意为将参数包保持整体作为一个参数传递
 */
#define __forward__(...) __VA_ARGS__

/**
 * @brief 将目标参数全部展开一次并打包成整体，并且由于外围有()即便内部有','也可以在嵌套的宏传递中保持只占单个参数位
 */
#define __pack__(...) (__VA_ARGS__)

/**
 * @brief 将unpack打包的结果全部解包成列表
 */
#define __unpack__(pack) __scan__ pack

/**
 * @brief 禁止展开
 */
#define __no_exp__(...) (__VA_ARGS__)

/**
 * @brief 继续展开
 */
#define __re_exp__(pack) __scan__ pack

/**
 * 用于表达式或目标宏展开为空的检测
 * 用法： 如果写__comma__ xxx ()仅当xxx为空时，才能展开为','，即当xxx为空时，参数的数量会+1，此时可通过参数移位得知是否为空
 */
#define __comma__(...) ,

#define __prepend_comma__(...) , __VA_ARGS__

#define __append_comma__(...) __VA_ARGS__,

#define __lparen__(...) (
#define __rparen__(...) )

#define __in_paren__(...) (__VA_ARGS__)

#define __hash_token__ #
#define __hash__(...) __hash_token__
#define __double_hash__(...) __cat_2__(__hash_token__, __hash_token__)

#endif//_PPMP_TOKEN
