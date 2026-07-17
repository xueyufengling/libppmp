#ifndef _PPMP_DEFERREDLOOP
#define _PPMP_DEFERREDLOOP

#include "base.h"
#include "equal.h"

/**
 * @brief 注：使用__pass_alias__(2, alias)是因为__if__中已经扫描了一次，还需要在外面使用__scan__再扫描一次，共两次扫描从__alias_repeat_intl__()别名宏中得到__repeat_intl__宏名
 */
#define __repeat_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_intl__() __repeat_intl__
/**
 * @brief 重复宏展开，用法：
 *		注：使用__full_scan__(...)多次扫描确保展开每一次宏递归
 */
#define __repeat__(expand_id, count, expand_macro, ...) __full_scan__(expand_id)(__repeat_intl__(0, count, expand_macro, __VA_ARGS__))

// cond_params实际上可能是__forward__()打包的参数，因此在传递时必须要再次打包，防止在__pass_alias__(2, alias)递归时展开导致后续参数错位
#define __while_deferred_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_deferred_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_deferred_intl__() __while_deferred_intl__
/**
 * @brief 循环cond_macro指定的宏直到条件为false
 *		宏的形式为cond_macro(...)，其中变长参数列表为传入传入cond_params的参数
 */
#define __while_deferred__(expand_id, cond_macro, cond_params, expand_macro, ...) __full_scan__(expand_id)(__while_deferred_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))

// op_macro第一个参数必须是当前索引，第二个参数必须是起始索引，第三个参数必须是终止索引（不包含）
#define __for_deferred_intl__(i, begin_idx, end_idx, op_macro, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		op_macro(i, begin_idx, end_idx, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_deferred_intl__)(__inc__(i), begin_idx, end_idx, op_macro, __VA_ARGS__)\
	)
#define __alias_for_deferred_intl__() __for_deferred_intl__
/**
 * @brief 循环[begin_idx, end_idx)
 */
#define __for_deferred__(expand_id, begin_idx, end_idx, op_macro, ...) __full_scan__(expand_id)(__for_deferred_intl__(begin_idx, begin_idx, end_idx, op_macro, __VA_ARGS__))

// 递归展开参数列表的首参数来迭代每个元素
#define __for_each_deferred_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_deferred_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_deferred_intl__() __for_each_deferred_intl__
/**
 * @brief for each，其中expand_macro为单参数宏，__VA_ARGS__中每个参数都将作为单参数传递给目标宏并展开，用法：
 *		注：使用__full_scan__(...)多次扫描确保展开每一次宏递归
 *		且该迭代未使用__at__(n)访问，而是直接迭代展开首参数
 */
#define __for_each_deferred__(expand_id, expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(expand_id)(__for_each_deferred_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)

#endif // _PPMP_DEFERREDLOOP
