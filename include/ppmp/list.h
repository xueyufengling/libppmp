#ifndef _PPMP_LIST
#define _PPMP_LIST

#include "catn.h"

#include "defs/placeholders.h"
#include "defs/at.h"
#include "defs/list_front.h"
#include "defs/list_rest.h"

//最大可访问的索引为__at_max_idx__()

/**
 * @brief 获取给定的参数列表中指定索引的参数，索引不能超出参数列表长度-1
 */
#define __at__(idx) __catn__(2)(__at__, idx)

#define __at_expand__(idx, ...) __at__(idx)(__VA_ARGS__)

#define __list_front__(n) __catn__(2)(__list_front__, n)

#define __list_expand_front__(n, ...) __list_front__(n)(__VA_ARGS__)

#define __list_rest__(n) __catn__(2)(__list_rest__, n)

#define __list_expand_rest__(n, ...) __list_rest__(n)(__VA_ARGS__)

/**
 * 支持检测的列表最大参数个数为__at_max_idx__()个
 */
#define __is_list_intl__(...) __at__(__at_max_idx__())(__VA_ARGS__)

/**
 * @brief 获取传入本宏的参数是否是列表，以','隔开
 */
#define __is_list__(...) __is_list_intl__(__VA_ARGS__, __is_list_placeholders__())

//__numof__()中间层将外层宏的__VA_ARGS__, __numof_placeholders__()整合为一个参数列表，否则__numof_placeholders__()将被视作单个参数而非展开的__at_max_idx__()+1个参数
#define __numof_intl__(...) __at__(__at_max_idx__())(__VA_ARGS__)

/**
 * @brief 获取传入本宏的参数个数，最大支持__at_max_idx__()个参数
 */
#define __numof__(...) __numof_intl__(__VA_ARGS__, __numof_placeholders__())

#endif//_PPMP_LIST
