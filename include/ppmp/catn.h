#ifndef _PPMP_CATN
#define _PPMP_CATN

#include "defs/catn.h"

/**
 * @brief 变长参数列表的前n项连接，cat的强形式，参数数量如果少于n会引发编译错误
 */
#define __catn__(n) __catn_intl__2(__catn__, n)

#endif//_PPMP_CATN
