#ifndef _PPMP_BOOL
#define _PPMP_BOOL

#include "intl/cat.h"
#include "intl/bool.h"

#include "list.h"

/**
 * @brief 将一个token或变长参数列表求值变为一个bool值，如果宏展开为nullptr、0、false或空则为0，否则为1。
 *	原理：只需要定义特定的token为false，其他的就都为true。利用token为false时展开为空，后面参数前移来决定bool值
 */
#define __bool__(expr) __not_intl__(__is_empty__(__cat_2__(__bool_expr__, expr)()))

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

#endif//_PPMP_BOOL
