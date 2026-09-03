#ifndef _PPMP_CAT
#define _PPMP_CAT

#include "defs/cat_noexp.h"
#include "defs/cat_front_noexp.h"

#include "intl/cat.h"

/**
 * token拼接
 */

#define __cat_noexp__(n) __cat_2__(__cat_noexp__, n)

#define __cat_front_noexp__(n) __cat_2__(__cat_front_noexp__, n)

/**
 * @brief 变长参数列表展开1次后的前n项连接，cat的强形式，参数数量如果少于n会引发编译错误
 */
#define __cat__(n, ...) __cat_noexp__(n)(__VA_ARGS__)

#define __cat_front__(n, ...) __cat_front_noexp__(n)(__VA_ARGS__)

#endif//_PPMP_CAT
