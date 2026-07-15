#ifndef _PPMP_BASE
#define _PPMP_BASE

#include "list.h"

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

#define __if_else_intl__1(true_result, ...) true_result
#define __if_else_intl__0(true_result, ...) __VA_ARGS__
#define __if_else_intl__(cond) __cat__(2, __if_else_intl__, cond)
#define __if_intl__1(...) __VA_ARGS__
#define __if_intl__0(...)
#define __if_intl__(cond) __cat__(2, __if_intl__, cond)

//单独定义宏而不用__scan__()展开是为了确保__comma__ __VA_ARGS__能作为多个参数传入，而不是列表整体作为一个参数传入
#define __in_matched_parenthesis_intl__(...) __at__(2)(__VA_ARGS__)
/**
 * @brief 检测参数是否是以配对的()括起来的表达式，如果是，则得到__comma__ __VA_ARGS__展开为','，参数列表变为{, , 1, 0}展开结果为1，否则参数列表变为{__comma__ token, 1, 0}展开结果为0.
 * 如果括号不配对，宏展开时参数列表混乱，编译器将报错。
 */
#define __in_matched_parenthesis__(...)\
		__in_matched_parenthesis_intl__(__comma__ __VA_ARGS__, 1, 0)

#define __matched_parenthesis__(...) (__VA_ARGS__)

//单独定义宏而不用__scan__()展开是为了确保__comma__ __VA_ARGS__ ()能作为多个参数传入，而不是列表整体作为一个参数传入
#define __is_empty_intl__(...) __at__(2)(__VA_ARGS__)

/**
 * @brief 判断参数是否为空
 * 		  原理：当参数为空时，__comma__ __VA_ARGS__ ()会展开为','导致参数数量+1，利用__is_empty_intl__()重新扫描可展开全部参数，导致第二次扫描时参数右移。为此，也要先确定__VA_ARGS__本身不能有','
 * 		  此外，还需要先确保__VA_ARGS__不是','或括号表达式，否则也会造成产生多余的','导致错位
 */
#define __is_empty__(...)\
		__if_else_intl__(__or_intl__(__is_list__(__VA_ARGS__), __in_matched_parenthesis__(__VA_ARGS__)))\
		(\
			0,\
			__is_empty_intl__(__comma__ __VA_ARGS__ (), 1, 0)\
		)

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
 * @brief ##__VA_ARGS__去除前导逗号仅在直接传入空时有效，例如
 * 		  #define test(...) __scan__(__header_, ##__VA_ARGS__, 0)
 * 		  直接写test()则能将前面的逗号去除，但若传入的是宏而该宏展开为空，即
 * 		  #define empty
 * 		  则test(empty)将展开为__scan__(__header_, , 0)，无法去除前面的逗号，但使用本宏将test定义为
 * 		  #define test(...) __scan__(__header_ __opt_comma__(__VA_ARGS__), 0)
 * 		  则不论是test()还是test(empty)均可正确展开为__scan__(__header_, 0)
 * 		  但必须注意的是，由于__pack_list__()的原理，该宏无论如何都会占据一个参数位，如果该参数前面已有参数，则此宏与前面的参数共占一个参数位，如上__header_ __opt_comma__(__VA_ARGS__)就只占一个参数位
 * 		  因此，将该宏单独作为一个参数以','分隔是无意义的。使用该宏是必须要在前面空格并写一个参数，这个整体将变为一个或两个参数，取决于传入__opt_comma__()的参数是否为空
 */
#define __opt_comma__(...)\
		__if_else_intl__(__is_empty__(__VA_ARGS__))\
		(\
			,\
			__prepend_comma__(__VA_ARGS__)\
		)

/**
 * @brief 拼接预处理器的token，如果变长参数列表为空则略去分隔符','
 * @detail 例如__cat_list__(,)展开为空占一个参数位；__cat_list__(, xxx)展开为, xxx占两个参数位，其中第一个参数为空。
 * 		   注意：当该宏出现在其他表达式内时，整个列表视作一个参数，原理同__pack_list__()，因此这时需要手写该宏的定义。
 */
#define __cat_list__(token, ...) token __opt_comma__(__VA_ARGS__)

/**
 * @brief 将一个token或变长参数列表求值变为一个bool值，如果宏展开为nullptr、0、false或空则为0，否则为1。
 * 		  原理：只需要定义特定的token为false，其他的就都为true。利用token为false时展开为空，后面参数前移来决定bool值
 */
#define __bool__(expr) __not_intl__(__is_empty__(__cat__(2, __bool_expr__, expr)()))

//expr为空也将视作0
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
 * 		  __if_else__(cond)
 * 		  (
 * 		  	true_code,
 * 		  	false_code
 * 		  )
 */
#define __if_else__(cond) __if_else_intl__(__bool__(cond))

/**
 * @brief 条件代码，后部括号可接收任意多个参数。用法：
 * 		  __if__(cond)(
 * 		  	true_code...
 * 		  )
 */
#define __if__(cond) __if_intl__(__bool__(cond))

/**
 * @brief 同名变体宏的名称。
 * 		  如果是重载宏，则为原名称+参数个数
 */
#define __va_macro_name__(macro_name, n) __cat__(2, macro_name, n)

/**
 * @brief 定义重载参数宏的示例，重载宏的名称需要与__va_macro__()保持一致
 * 例如定义一个名为example_macro的宏，并实现其0、1、2个参数的实现，可以写为
 * #define example_macro(...) __va_macro__(example_macro, __VA_ARGS__)
 * #define example_macro0() ...
 * #define example_macro1(x) ...
 * #define example_macro2(x, y) ...
 */
#define __va_macro__(macro_name, ...) __va_macro_name__(macro_name, __sizeof__(__VA_ARGS__))(__VA_ARGS__)

#endif //_PPMP_BASE
