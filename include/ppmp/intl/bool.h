#ifndef _PPMP_INTL_BOOL
#define _PPMP_INTL_BOOL

#include "cat.h"

/**
 * @brief 逻辑非
 */
#define __not_intl__(expr) __cat_2__(__not_intl__, expr)()
#define __not_intl__1() 0
#define __not_intl__0() 1

/**
 * @brief 逻辑与
 */
#define __and_intl__(expr1, expr2) __cat_3__(__and_intl__, expr1, expr2)()
#define __and_intl__00() 0
#define __and_intl__01() 0
#define __and_intl__10() 0
#define __and_intl__11() 1

/**
 * @brief 逻辑或
 */
#define __or_intl__(expr1, expr2) __cat_3__(__or_intl__, expr1, expr2)()
#define __or_intl__00() 0
#define __or_intl__01() 1
#define __or_intl__10() 1
#define __or_intl__11() 1

/**
 * @brief 同或
 */
#define __xnor_intl__(expr1, expr2) __cat_3__(__xnor_intl__, expr1, expr2)()
#define __xnor_intl__00() 1
#define __xnor_intl__01() 0
#define __xnor_intl__10() 0
#define __xnor_intl__11() 1

/**
 * @brief 异或
 */
#define __xor_intl__(expr1, expr2) __cat_3__(__xor_intl__, expr1, expr2)()
#define __xor_intl__00() 0
#define __xor_intl__01() 1
#define __xor_intl__10() 1
#define __xor_intl__11() 0

#endif//_PPMP_INTL_BOOL
