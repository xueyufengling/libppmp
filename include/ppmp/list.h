#ifndef _PPMP_LIST
#define _PPMP_LIST

#include "token.h"

#include "defs/placeholders.h"
#include "defs/at.h"
#include "defs/list_front.h"
#include "defs/list_rest.h"

//最大可访问的索引为__list_max_size__()

/**
 * @brief 获取给定的参数列表中指定索引的参数，索引不能超出参数列表长度-1
 */
#define __at__(idx) __cat__(2, __at__, idx)

#define __at_exp__(idx, ...) __at__(idx)(__VA_ARGS__)

/**
 * @brief 保留前n个元素
 */
#define __list_front__(n) __cat__(2, __list_front__, n)

#define __list_exp_front__(n, ...) __list_front__(n)(__VA_ARGS__)

/**
 * @brief 保留除去前n个元素剩下的其他元素
 */
#define __list_rest__(n) __cat__(2, __list_rest__, n)

#define __list_exp_rest__(n, ...) __list_rest__(n)(__VA_ARGS__)

/**
 * @brief 获取传入本宏的参数是否是列表，以','隔开
 * 		  支持检测的列表最大参数个数为__list_max_size__()个
 */
#define __is_list__(...) __at_exp__(__list_max_size__(), __VA_ARGS__, __is_list_placeholders__())

#endif//_PPMP_LIST
