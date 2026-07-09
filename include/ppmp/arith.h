#ifndef _PPMP_ARITH
#define _PPMP_ARITH

#include "catn.h"

#include "defs/inc.h"
#include "defs/dec.h"

/**
 * @brief 自增运算，n表示负数
 */
#define __inc__(x) __catn__(2)(__inc__, x)()

/**
 * @brief 自减运算，n表示负数
 */
#define __dec__(x) __catn__(2)(__dec__, x)()

#endif//_PPMP_ARITH
