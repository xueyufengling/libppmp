#ifndef _PPMP_LOOP
#define _PPMP_LOOP

#include "base.h"
#include "equal.h"
#include "arith.h"

#include "defs/for_each.h"
#include "defs/for.h"
#include "defs/while.h"


//注意！不能用__pass_alias__(n)延迟展开来递归，否则递归宏内参数展开时，若参数也是递归宏，那么每次迭代都会导致参数展开的full scan或for each宏与外层宏同名，导致递归重入

/**
 * @brief for each，其中expand_macro为单参数宏，__VA_ARGS__中每个参数都将作为单参数传递给目标宏并展开，用法：
 * 		  __for_each__(expand_id)(expand_macro, expand_params, elements...)
 * 		  且该迭代未使用__at__(n)访问，而是直接迭代展开首参数，性能更好
 * 		  递归展开参数列表的首参数来迭代每个元素，如果列表中有某个参数本身也是列表，则将会展开那个列表，例如a, __pack_list__(b, c)虽然只是两个参数，但for each会按照a, b, c分别遍历。
 */
#define __for_each__(expand_id) __catn__(3)(__for_each_, expand_id, _intl__)



/**
 * @brief 循环[begin_idx, begin_idx, end_idx)，使用方法为
 * 		  __for__(expand_id)(begin_idx, end_idx, expand_macro, expand_params, elements...)
 * 		  expand_macro第一个参数必须是起始索引，第二个参数必须是终止索引（不包含），第三个参数必须是当前索引，第四个参数必须是当前元素，即
 * 		  expand_macro(begin_idx, end_idx, current_idx, expand_params, elements...)
 */
#define __for__(expand_id) __catn__(3)(__for_, expand_id, _intl__)

/**
 * @brief 循环直到cond_macro(i, cond_params)为0或continue_iter为0
 * 		  cond_params实际上可能是__pack_list__()打包的参数，因此在传递时必须要再次打包，防止在__2_pass_alias__()递归时展开导致后续参数错位
 * 		  expand_macro()展开后，第一位必须是0或1，决定是否进行下一次迭代
 */
#define __while__(expand_id) __catn__(3)(__while_, expand_id, _intl__)

#endif//_PPMP_LOOP
