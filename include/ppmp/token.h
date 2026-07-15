#ifndef _PPMP_TOKEN
#define _PPMP_TOKEN

#include "defs/cat_noexp.h"
#include "defs/alias.h"
#include "defs/full_scan.h"

/**
 * token处理
 */

#define __cat_noexp_intl__(n) __cat_noexp__##n
#define __cat_noexp__(n) __cat_noexp_intl__(n)

/**
 * @brief 变长参数列表展开1次后的前n项连接，cat的强形式，参数数量如果少于n会引发编译错误
 */
#define __cat__(n, ...) __cat_noexp__(n)(__VA_ARGS__)

/**
 * @brief 不展开传入参数，直接将传入token字符串化
 */
#define __str_noexp__(...) #__VA_ARGS__

/**
 * @brief 先展开传入参数，再字符串化
 */
#define __str__(...) __str_noexp__(__VA_ARGS__)

/**
 * @brief 空参数宏，用于分隔别名（定义为宏名的参数宏）和展开别名使用的括号
 */
#define __empty__(...)

#define __true__(...) 1
#define __false__(...) 0

/**
 * @brief 对传入的宏进行扫描展开
 */
#define __scan__(...) __VA_ARGS__

/**
 * @brief 当一个参数位传入一个','分隔的参数列表时，将该参数用此宏包围，如果需要将此列表作为一个整体传递给其他宏的单个参数，则在传入时需要将列表用此宏包围，即保留参数的列表性质
 * 		  原理：如果一个宏接收多个参数，那么该宏经过展开即便有','分隔符也视作单个参数，因此可以将参数列表打包成单个参数。直接使用__VA_ARGS__是展开的，展开的每个参数都占一个参数位，如果不希望展开则使用__pack_list__(__VA_ARGS__)，其仍然只占一个参数位
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
 * 用于表达式或目标宏展开为空的检测
 * 用法： 如果写__comma__ xxx ()仅当xxx为空时，才能展开为','，即当xxx为空时，参数的数量会+1，此时可通过参数移位得知是否为空
 */
#define __comma__(...) ,

#define __prepend_comma__(...) , __VA_ARGS__

#define __append_comma__(...) __VA_ARGS__,

#define __lparen__(...) (
#define __rparen__(...) )

#define __hash_token__ #
#define __hash__(...) __forward__(__hash_token__)
#define __double_hash__(...) __cat__(2, __hash_token__, __hash_token__)

/**
 * @brief 仅在宏递归展开中使用，将本宏额外展开一次可以得到目标宏。需要额外展开n次才能得到目标宏
 * 		  在目标宏（__VA_ARGS__参数传入目标宏的别名，不能直接传入目标宏本身，否则会被标记不展开）与其参数列表之间插入一个空内容的__empty__()宏，使得目标宏及其参数的解析必须延迟到下一次__scan___(。。。)时才能将__empty__()消除并展开目标宏
 * 		  宏的间接名称的定义必须是目标宏名，例如目标宏为
 * 		  #define target(x, y) (x + y)
 * 		  那么还需要定义一个别名
 * 		  #define __alias__target() target
 * 		  使用时将别名作为参数，即__1_pass_alias__(__alias__target)(...)
 * 		  在本宏的直接展开中，展开的结果将不会包含目标宏名，只有别名，而别名可在第二次扫描展开时展开为目标宏
 *
 * 		  延迟展开的递归宏的定义中，不要有使用另一个递归宏，否则展开时可能因涂蓝导致无法展开，使得宏与参数对不上，甚至出现拼接错误的混乱token，非常难排查问题
 */
#define __pass_alias__(n) __cat__(3, __, n, _pass_alias__)

/**
 * @brief full scan函数族的作用均为，足够多次地重复扫描参数，确保传入参数的完全展开
 */
#if !defined(__full_scan_level__)
#define __full_scan_level__() 10
#endif

/**
 * 2^n次扫描。
 * 注：由于未知原因，__full_scan_intl__0(...)必须直接地定义为__VA_ARGS__，而下列写法虽然看上去正确但实际上对于较大（但理论上仍然可行的）展开次数会报错：
 * #define __full_scan_intl__0 __scan__
 * #define __full_scan_intl__0(...) __scan__(__VA_ARGS__)
 * 尽管这两种写法看上去没有问题，但多次测试发现只有#define __full_scan_intl__0(...) __VA_ARGS__的写法不会报错
 *
 * ！！！注意！！！
 * 如果在一个递归宏的定义中要完全展开另一个递归宏，则两个递归宏**必须**使用不同的__full_scan__()宏。
 * 如果两个宏均使用同一个展开宏，否则在外层宏展开__full_scan__()宏时内层的递归宏也使用同一个__full_scan__()宏展开，导致递归重入，内层递归宏的__full_scan__()根本不会展开，导致出错
 */

/**
 * @brief 选择第n个__full_scan_n__()宏，n不同时，对应的扫描宏名不同，但都是扫描功能完全相同。只用于防止嵌套递归时full scan递归重入。
 */
#define __full_scan_with_level__(n, level) __cat__(4, __full_scan_, n, _intl__, level)
#define __full_scan__(n) __full_scan_with_level__(n, __full_scan_level__())

#define __alias_pack_list__() __pack_list__
#define __pack_list_deferred__(n_pass) __pass_alias__(n_pass)(__alias_pack_list__)

#define __alias_forward__() __forward__
#define __forward_deferred__(n_pass) __pass_alias__(n_pass)(__alias_forward__)

#endif//_PPMP_TOKEN
