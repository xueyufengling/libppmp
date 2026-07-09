#ifndef _PPMP_BASE
#define _PPMP_BASE

#include "catn.h"
#include "tokens.h"
#include "list.h"

#include "defs/alias.h"
#include "defs/full_scan.h"

/**
 * @brief 仅在宏递归展开中使用，将本宏额外展开一次可以得到目标宏。需要额外展开n次才能得到目标宏
 * 		  在目标宏（__VA_ARGS__参数传入目标宏的别名，不能直接传入目标宏本身，否则会被标记不展开）与其参数列表之间插入一个空内容的__empty__()宏，使得目标宏及其参数的解析必须延迟到下一次__scan___(。。。)时才能将__empty__()消除并展开目标宏
 * 		  宏的间接名称的定义必须是目标宏名，例如目标宏为
 * 		  #define target(x, y) (x + y)
 * 		  那么还需要定义一个别名
 * 		  #define __alias__target() target
 * 		  使用时将别名作为参数，即__1_pass_alias__(__alias__target)()
 * 		  在本宏的直接展开中，展开的结果将不会包含目标宏名，只有别名，而别名可在第二次扫描展开时展开为目标宏
 *
 * 		  延迟展开的递归宏的定义中，不要有使用另一个递归宏，否则展开时可能因涂蓝导致无法展开，使得宏与参数对不上，甚至出现拼接错误的混乱token，非常难排查问题
 */
#define __pass_alias__(n) __catn__(3)(__, n, _pass_alias__)

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
#define __full_scan_with_level__(n, level) __catn__(4)(__full_scan_, n, _intl__, level)
#define __full_scan__(n) __full_scan_with_level__(n, __full_scan_level__())

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
#define __alias_pack_list__() __pack_list__
#define __pack_list_deferred__(n_pass) __pass_alias__(n_pass)(__alias_pack_list__)

/**
 * 提供了预处理器元编程的基本宏。
 * 定义常量均使用带参数的宏，这样做的理由是：
 * 1. 能尽可能减少命名冲突（主要指的是C/C++的变量名、类名等）导致文本无意间被替换，尤其是使用了别人的库而别人定义了这种宏时，不知情的情况下这种替换往往很难查出。
 * 2. 一些技巧需要对宏进行延迟展开，而带参数的宏的展开必须要宏名和()两部分相邻才能展开，利用这个性质可以实现延迟展开。
 */

/**
 * @brief 逻辑非
 */
#define __not_intl__(expr) __catn__(2)(__not_intl__, expr)()
#define __not_intl__1() 0
#define __not_intl__0() 1

/**
 * @brief 逻辑与
 */
#define __and_intl__(expr1, expr2) __catn__(3)(__and_intl__, expr1, expr2)()
#define __and_intl__00() 0
#define __and_intl__01() 0
#define __and_intl__10() 0
#define __and_intl__11() 1

/**
 * @brief 逻辑或
 */
#define __or_intl__(expr1, expr2) __catn__(3)(__or_intl__, expr1, expr2)()
#define __or_intl__00() 0
#define __or_intl__01() 1
#define __or_intl__10() 1
#define __or_intl__11() 1

/**
 * @brief 同或
 */
#define __xnor_intl__(expr1, expr2) __catn__(3)(__xnor_intl__, expr1, expr2)()
#define __xnor_intl__00() 1
#define __xnor_intl__01() 0
#define __xnor_intl__10() 0
#define __xnor_intl__11() 1

/**
 * @brief 异或
 */
#define __xor_intl__(expr1, expr2) __catn__(3)(__xor_intl__, expr1, expr2)()
#define __xor_intl__00() 0
#define __xor_intl__01() 1
#define __xor_intl__10() 1
#define __xor_intl__11() 0

//不使用__if_else_intl__0(true_result, ...) __VA_ARGS__ 是为了防止意外出错却编译通过，结果可能不正确（结果不符合预期但不报错很难排查）
#define __if_else_intl__1(true_result, false_result) true_result
#define __if_else_intl__0(true_result, false_result) false_result
#define __if_else_intl__(cond) __catn__(2)(__if_else_intl__, cond)
#define __if_intl__1(...) __VA_ARGS__
#define __if_intl__0(...)
#define __if_intl__(cond) __catn__(2)(__if_intl__, cond)

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
#define __bool__(expr) __not_intl__(__is_empty__(__catn__(2)(__bool_expr__, expr)()))

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
#define __va_macro_name__(macro_name, n) __catn__(2)(macro_name, n)

/**
 * @brief 定义重载参数宏的示例，重载宏的名称需要与__va_macro__()保持一致
 * 例如定义一个名为example_macro的宏，并实现其0、1、2个参数的实现，可以写为
 * #define example_macro(...) __va_macro__(example_macro, __VA_ARGS__)
 * #define example_macro0() ...
 * #define example_macro1(x) ...
 * #define example_macro2(x, y) ...
 */
#define __va_macro__(macro_name, ...) __va_macro_name__(macro_name, __numof__(__VA_ARGS__))(__VA_ARGS__)

#endif //_PPMP_BASE
