#ifndef _PPMP_ARITH
#define _PPMP_ARITH

#include "defs/inc.h"
#include "defs/dec.h"

#include "intl/cat.h"

/**
 * @brief 自增运算，n表示负数
 */
#define __inc__(x) __cat_2__(__inc__, x)()

/**
 * @brief 自减运算，n表示负数
 */
#define __dec__(x) __cat_2__(__dec__, x)()

#endif//_PPMP_ARITH
