#ifndef _PPMP_IF
#define _PPMP_IF

#include "intl/cat.h"
#include "intl/if.h"

#include "bool.h"
#include "list.h"

/**
 * @brief if-apply的子句，如果以本宏包围则先判断条件是否成立再展开求值。
 *	不能用于递归循环体内，否则由于延迟展开导致括号嵌套无法消除
 */
#define __clause__(...) (__VA_ARGS__)

#define __if_else_apply_intl__1(true_result, ...)\
	__if_intl__(__in_matched_paren__(true_result))\
	(\
		__scan__\
	)true_result
#define __if_else_apply_intl__0(true_result, ...)\
	__if_intl__(__in_matched_paren__(__VA_ARGS__))\
	(\
		__scan__\
	)__VA_ARGS__
#define __if_else_apply_intl__(cond) __cat_2__(__if_else_apply_intl__, cond)

#define __if_apply_intl__1(...)\
	__if_intl__(__in_matched_paren__(__VA_ARGS__))\
	(\
		__scan__\
	)__VA_ARGS__
#define __if_apply_intl__0(...)
#define __if_apply_intl__(cond) __cat_2__(__if_apply_intl__, cond)

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

#endif//_PPMP_IF
