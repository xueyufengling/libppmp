#ifndef _PPMP_LIST
#define _PPMP_LIST

#include "defs/placeholders.h"
#include "defs/at.h"
#include "defs/list_front.h"
#include "defs/list_rest.h"

#include "intl/cat.h"
#include "intl/bool.h"
#include "intl/if.h"

#include "token.h"
#include "arith.h"

//最大可访问的索引为__list_max_size__()

/**
 * @brief 获取给定的参数列表中指定索引的参数，索引不能超出参数列表长度-1
 */
#define __at__(idx) __cat_2__(__at__, idx)

#define __at_exp__(idx, ...) __at__(idx)(__VA_ARGS__)

/**
 * @brief 保留前n个元素
 */
#define __list_front__(n) __cat_2__(__list_front__, n)

#define __list_exp_front__(n, ...) __list_front__(n)(__VA_ARGS__)

/**
 * @brief 保留除去前n个元素剩下的其他元素
 */
#define __list_rest__(n) __cat_2__(__list_rest__, n)

#define __list_exp_rest__(n, ...) __list_rest__(n)(__VA_ARGS__)

/**
 * @brief 获取传入本宏的参数是否是列表，以','隔开
 * 		  支持检测的列表最大参数个数为__list_max_size__()个
 */
#define __is_list__(...) __at_exp__(__list_max_size__(), __VA_ARGS__, __is_list_placeholders__())

/**
 * @brief 检测参数是否是以配对的()括起来的表达式，如果是，则得到__comma__ __VA_ARGS__展开为','，参数列表变为{, , 1, 0}展开结果为1，否则参数列表变为{__comma__ token, 1, 0}展开结果为0.
 * 	  如果括号不配对，宏展开时参数列表混乱，编译器将报错。必须先判断是否是列表，如是列表则肯定不是括号括起来的表达式。如果不判断是否是列表，则参数会展开，1, 0将后移，会导致索引为2处不是正确结果。
 */
#define __in_matched_paren__(...)\
	__if_else_intl__(__is_list__(__VA_ARGS__))\
	(\
		0,\
		__at_exp__(2, __comma__ __VA_ARGS__, 1, 0)\
	)

/**
 * @brief 判断参数是否为空
 *	原理：当参数为空时，__comma__ __VA_ARGS__ ()会展开为','导致参数数量+1，利用__is_empty_intl__()重新扫描可展开全部参数，导致第二次扫描时参数右移。为此，也要先确定__VA_ARGS__本身不能有','
 *	此外，还需要先确保__VA_ARGS__不是','或括号表达式，否则也会造成产生多余的','导致错位
 *	使用__at_exp__()是为了确保__comma__ __VA_ARGS__ ()能作为多个参数传入，而不是列表整体作为一个参数传入
 */
#define __is_empty__(...)\
	__if_else_intl__(__or_intl__(__is_list__(__VA_ARGS__), __in_matched_paren__(__VA_ARGS__)))\
	(\
		0,\
		__at_exp__(2, __comma__ __VA_ARGS__ (), 1, 0)\
	)

#define __is_not_empty__(...) __not_intl__(__is_empty__(__VA_ARGS__))

/**
 * @brief 获取传入本宏的参数展开2次后的个数，最大支持__list_max_size__()个参数。
 * 		  __sizeof__()使用__at_exp__()中间层将__VA_ARGS__, __sizeof_placeholders__()整合为一个参数列表，否则__sizeof_placeholders__()将被视作单个参数而非展开的__list_max_size__()+1个参数
 * 		  由于不论__VA_ARGS__是否为空，它都会占一个参数位，因此为空时需要单独处理
 */
#define __sizeof__(...)\
	__if_else_intl__(__is_empty__(__VA_ARGS__))\
	(\
		0,\
		__at_exp__(__list_max_size__(), __VA_ARGS__, __sizeof_placeholders__())\
	)

/**
 * @brief 列表末尾元素的索引
 */
#define __list_last_idx__(...)\
	__dec__(__sizeof__(__VA_ARGS__))

/**
 * @brief 获取列表最后一个元素
 */
#define __list_last__(...)\
	__at__(__list_last_idx__(__VA_ARGS__))(__VA_ARGS__)

/**
 * @brief 移除列表的最后一个元素
 */
#define __list_rm_last__(...)\
	__list_front__(__list_last_idx__(__VA_ARGS__))(__VA_ARGS__)

/**
 * @brief 同C++20的宏拓展__VA_OPT__(token)，但使用时需要手动传入__VA_ARGS__，即__va_opt__(token, __VA_ARGS__)
 */
#define __va_opt__(token, ...)\
	__if_else_intl__(__is_empty__(__VA_ARGS__))\
	(\
		,\
		token\
	)

/**
 * @brief 同GCC的拓展##__VA_ARGS__一致，但会额外展开1次__VA_ARGS__（会影响__defer__()宏）。去除前导逗号仅在传入的宏为空时有效，例如
 * 	  #define test(...) __scan__(__header_, ##__VA_ARGS__, 0)
 * 	  直接写test()则能将前面的逗号去除，但若传入的是宏而该宏展开为空，则保留逗号。
 * 	  必须注意的是，由于__pack_list__()的原理，该宏无论如何都会占据一个参数位，如果该参数前面已有参数，则此宏与前面的参数共占一个参数位，如上__header_ __va_opt_comma__(__VA_ARGS__)就只占一个参数位
 * 	  因此，将该宏单独作为一个参数以','分隔是无意义的。使用该宏是必须要在前面空格并写一个参数，这个整体将变为一个或两个参数，取决于传入__va_opt_comma__()的参数是否为空
 * 	  注意！该逗号展开后不视作分隔符。例如
 * 	  #define M(x, y) x##y
 * 	  若定义
 * 	  #define OP(...) M(0 __va_opt_comma__(__VA_ARGS__) __VA_ARGS__)
 * 	  那么OP(1)展开后为M(0 , 1)且其中0 , 1被视作一个token（逗号是在解析OP参数的过程中出现的，因此它被视作参数而非参数分隔符），而M(x, y)接收两个token，展开失败。
 * 	  如果想要展开的逗号作为分隔符，需要将OP宏的整个参数列表再扫描一次，即
 * 	  #define OP(...) __call__(M, 0 __va_opt_comma__(__VA_ARGS__) __VA_ARGS__)
 * 	  如此就能将0 , 1分别视作两个参数传给M()，展开成功并得到01.
 *
 * 	  如果仅用于代码生成时生成','则不需要重新扫描，仅当需要展开的','作为宏参数分隔符时需要重新扫描
 */
#define __va_opt_comma__(...) __va_opt__(__comma__(), __VA_ARGS__)

#define __front_va_opt_comma__(...) __va_opt_comma__(__VA_ARGS__) __VA_ARGS__
#define __back_va_opt_comma__(...) __VA_ARGS__ __va_opt_comma__(__VA_ARGS__)

/**
 * @brief 拼接预处理器的token，如果变长参数列表为空则略去分隔符','
 * @detail 例如__cat_list__(,)展开为空占一个参数位；__cat_list__(, xxx)展开为, xxx占两个参数位，其中第一个参数为空。
 * 		   注意：当该宏出现在其他表达式内时，整个列表视作一个参数，原理同__pack_list__()，因此这时需要手写该宏的定义。
 */
#define __list_prepend__(token, ...) token __va_opt_comma__(__VA_ARGS__) __VA_ARGS__
#define __list_apppend__(token, ...) __VA_ARGS__ __va_opt_comma__(__VA_ARGS__) token

/**
 * @brief 如果传入的是__pack__()打包宏，则不作处理，否则将其打包
 */
#define __try_pack__(...)\
	__if_intl__(__in_matched_paren__(__VA_ARGS__))\
	(\
		__pack_list__(__VA_ARGS__),\
		__pack__(__VA_ARGS__)\
	)

/**
 * @brief 如果传入的是__pack__()打包宏，则展开包，否则不作处理（但会扫描一次）
 */
#define __try_unpack__(...)\
	__if_intl__(__in_matched_paren__(__VA_ARGS__))\
	(\
		__scan__\
	)__VA_ARGS__

#endif//_PPMP_LIST
