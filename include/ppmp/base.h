#ifndef _PPMP_BASE
#define _PPMP_BASE

#include "list.h"
#include "arith.h"

/**
 * 提供了预处理器元编程的基本宏。
 * 定义常量均使用带参数的宏，这样做的理由是：
 * 1. 能尽可能减少命名冲突（主要指的是C/C++的变量名、类名等）导致文本无意间被替换，尤其是使用了别人的库而别人定义了这种宏时，不知情的情况下这种替换往往很难查出。
 * 2. 一些技巧需要对宏进行延迟展开，而带参数的宏的展开必须要宏名和()两部分相邻才能展开，利用这个性质可以实现延迟展开。
 *
 * 使用宏时，如果出现错误，往往最后一个直接报错的地方不是问题根源，而是在展开链的某个环节产生了意料之外的结果（例如递归重入导致未展开），而错误的展开结果的结构作为参数在外层宏展开时错误继续放大，直到因语法报错终止展开。
 * 例如while递归的结束条件展开错误，就可能导致迭代次数远超预期，将在正确展开次数之后很远的地方才因语法错误而报错，乃至一直展开到最大迭代深度。
 */

/**
 * @brief 逻辑非
 */
#define __not_intl__(expr) __cat__(2, __not_intl__, expr)()
#define __not_intl__1() 0
#define __not_intl__0() 1

/**
 * @brief 逻辑与
 */
#define __and_intl__(expr1, expr2) __cat__(3, __and_intl__, expr1, expr2)()
#define __and_intl__00() 0
#define __and_intl__01() 0
#define __and_intl__10() 0
#define __and_intl__11() 1

/**
 * @brief 逻辑或
 */
#define __or_intl__(expr1, expr2) __cat__(3, __or_intl__, expr1, expr2)()
#define __or_intl__00() 0
#define __or_intl__01() 1
#define __or_intl__10() 1
#define __or_intl__11() 1

/**
 * @brief 同或
 */
#define __xnor_intl__(expr1, expr2) __cat__(3, __xnor_intl__, expr1, expr2)()
#define __xnor_intl__00() 1
#define __xnor_intl__01() 0
#define __xnor_intl__10() 0
#define __xnor_intl__11() 1

/**
 * @brief 异或
 */
#define __xor_intl__(expr1, expr2) __cat__(3, __xor_intl__, expr1, expr2)()
#define __xor_intl__00() 0
#define __xor_intl__01() 1
#define __xor_intl__10() 1
#define __xor_intl__11() 0

/**
 * @brief 先展开求值再保留符合条件的分支
 */
#define __if_else_intl__1(true_result, ...) true_result
#define __if_else_intl__0(true_result, ...) __VA_ARGS__
#define __if_else_intl__(cond) __cat__(2, __if_else_intl__, cond)
#define __if_intl__1(...) __VA_ARGS__
#define __if_intl__0(...)
#define __if_intl__(cond) __cat__(2, __if_intl__, cond)

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
 * @brief if-apply的子句，如果以本宏包围则先判断条件是否成立再展开求值。
 *	不能用于递归循环体内，否则由于延迟展开导致括号嵌套无法消除
 */
#define __clause__(...) (__VA_ARGS__)

#define __if_else_apply_intl__1(true_result, ...)\
	__if_intl__(__in_matched_paren__(true_result))\
	(\
	__scan__\
	) true_result
#define __if_else_apply_intl__0(true_result, ...)\
	__if_intl__(__in_matched_paren__(__VA_ARGS__))\
	(\
	__scan__\
	) __VA_ARGS__
#define __if_else_apply_intl__(cond) __cat__(2, __if_else_apply_intl__, cond)

#define __if_apply_intl__1(...)\
	__if_intl__(__in_matched_paren__(__VA_ARGS__))\
	(\
	__scan__\
	) __VA_ARGS__
#define __if_apply_intl__0(...)
#define __if_apply_intl__(cond) __cat__(2, __if_apply_intl__, cond)

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

/**
 * @brief 拼接预处理器的token，如果变长参数列表为空则略去分隔符','
 * @detail 例如__cat_list__(,)展开为空占一个参数位；__cat_list__(, xxx)展开为, xxx占两个参数位，其中第一个参数为空。
 * 		   注意：当该宏出现在其他表达式内时，整个列表视作一个参数，原理同__pack_list__()，因此这时需要手写该宏的定义。
 */
#define __list_prepend__(token, ...) token __va_opt_comma__(__VA_ARGS__) __VA_ARGS__
#define __list_apppend__(token, ...) __VA_ARGS__ __va_opt_comma__(__VA_ARGS__) token

/**
 * @brief 将一个token或变长参数列表求值变为一个bool值，如果宏展开为nullptr、0、false或空则为0，否则为1。
 *	原理：只需要定义特定的token为false，其他的就都为true。利用token为false时展开为空，后面参数前移来决定bool值
 */
#define __bool__(expr) __not_intl__(__is_empty__(__cat__(2, __bool_expr__, expr)()))

// expr为空也将视作0
#define __bool_expr__()
#define __bool_expr__0()
#define __bool_expr__false()
#define __bool_expr__nullptr()

/**
 * @brief 逻辑非
 */
#define __not__(expr) __not_intl__(__bool__(expr))

/**
 * @brief 逻辑与
 */
#define __and__(expr1, expr2) __and_intl__(__bool__(expr1), __bool__(expr2))

/**
 * @brief 逻辑或
 */
#define __or__(expr1, expr2) __or_intl__(__bool__(expr1), __bool__(expr2))

/**
 * @brief 同或
 */
#define __xnor__(expr1, expr2) __xnor_intl__(__bool__(expr1), __bool__(expr2))

/**
 * @brief 异或
 */
#define __xor__(expr1, expr2) __xor_intl__(__bool__(expr1), __bool__(expr2))

/**
 * @brief 条件代码，后部括号只能接收两个参数或列表，对应两个分支的代码，用法：
 *	__if_else__(cond)
 *	(
 *		true_code,
 *		false_code
 *	)
 */
#define __if_else__(cond) __if_else_intl__(__bool__(cond))

/**
 * @brief 条件代码，后部括号可接收任意多个参数。用法：
 *	__if__(cond)(
 *		true_code...
 *	)
 */
#define __if__(cond) __if_intl__(__bool__(cond))

/**
 * @brief 重载的名称，为原名称+参数个数
 * 		  定义重载参数宏的示例，重载宏的名称需要与__va_macro__()保持一致
 * 		  例如定义一个名为example_macro的宏，并实现其0、1、2个参数的实现，可以写为
 * 		  #define example_macro(...) __va_macro__(example_macro, __VA_ARGS__)(__VA_ARGS__)
 * 		  #define example_macro0() ...
 * 		  #define example_macro1(x) ...
 * 		  #define example_macro2(x, y) ...
 */
#define __va_macro__(macro_name, ...) __cat__(2, macro_name, __sizeof__(__VA_ARGS__))

#define __call_va_macro__(macro_name, ...) __va_macro__(macro_name, __VA_ARGS__)(__VA_ARGS__)

#endif // _PPMP_BASE
