#ifndef _PPMP_INTL_IF
#define _PPMP_INTL_IF

#include "cat.h"

/**
 * @brief 先展开求值再保留符合条件的分支
 */
#define __if_else_intl__1(true_result, ...) true_result
#define __if_else_intl__0(true_result, ...) __VA_ARGS__
#define __if_else_intl__(cond) __cat_2__(__if_else_intl__, cond)
#define __if_intl__1(...) __VA_ARGS__
#define __if_intl__0(...)
#define __if_intl__(cond) __cat_2__(__if_intl__, cond)

#endif//_PPMP_INTL_IF
