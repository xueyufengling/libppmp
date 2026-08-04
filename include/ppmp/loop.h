#ifndef _PPMP_LOOP
#define _PPMP_LOOP

#include "base.h"
#include "equal.h"

#include "defs/repeat.h"
#include "defs/while.h"
#include "defs/for.h"
#include "defs/for_each.h"

// 注：使用__pass_alias__(2, alias)是因为__if__中已经扫描了一次，还需要在外面使用__scan__再扫描一次，共两次扫描从__alias_repeat_intl__()别名宏中得到__repeat_intl__宏名
/**
 * @brief 重复宏展开，用法：
 *		注：使用__full_scan__(...)多次扫描确保展开每一次宏递归
 */
#define __repeat__(expand_id) __cat__(2, __repeat__, expand_id)

// cond_params实际上可能是__forward__()打包的参数，因此在传递时必须要再次打包，防止在__pass_alias__(2, alias)递归时展开导致后续参数错位
/**
 * @brief 循环cond_macro指定的宏直到条件为false
 *		宏的形式为cond_macro(...)，其中变长参数列表为传入传入cond_params的参数
 */
#define __while__(expand_id) __cat__(2, __while__, expand_id)

// op_macro第一个参数必须是当前索引，第二个参数必须是起始索引，第三个参数必须是终止索引（不包含）
/**
 * @brief 循环[begin_idx, begin_idx, end_idx)，使用方法为
 * 		  __for__(expand_id)(begin_idx, end_idx, expand_macro, const_params, elements...)
 * 		  expand_macro第1个参数必须是当前索引，第2个参数是起始索引，第3个参数必须是终止索引（不包含），第4个参数必须是const_params，第5个元素是当前元素，即
 * 		  expand_macro(i, begin_idx, end_idx, current_idx, const_params, elements...)
 */
#define __for__(expand_id) __cat__(2, __for__, expand_id)

// 递归展开参数列表的首参数来迭代每个元素
/**
 * @brief for each，其中expand_macro为单参数宏，__VA_ARGS__中每个参数都将作为单参数传递给目标宏并展开，用法：
 * 		__for_each__(expand_id)(expand_macro, const_params, ...)
 *		注：使用__full_scan__(...)多次扫描确保展开每一次宏递归
 *		且该迭代未使用__at__(n)访问，而是直接迭代展开首参数
 */
#define __for_each__(expand_id) __cat__(2, __for_each__, expand_id)

#endif // _PPMP_LOOP
