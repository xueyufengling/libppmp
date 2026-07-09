#ifndef _PPMP_RECURSIVELOOP
#define _PPMP_RECURSIVELOOP

#include "catn.h"
#include "base.h"
#include "equal.h"
#include "arith.h"

#include "defs/for_recursive.h"
#include "defs/while_recursive.h"

/**
 * 递归展开（是多级不同名的宏展开，而非同一个宏延迟展开），可以保证递归嵌套时内层递归先完全展开以后再代入外层宏进行展开，而延迟展开则无法保证，极易引发递归重入。
 * 其中expand_macro()展开后的结果必须是 continue_iter, updated_elements...。 continue_iter决定是否进行下一次迭代，参数列表updated_elements则作为下一次迭代的elements...传入。
 * 当超过最大迭代次数时，展开结果均为XXX_maxlevel_OUT_OF_RANGE。
 * 以下形式的中间宏用于从expand_macro(i, const_params, const_params, ...)的展开结果中分离continue_iter和更新后的参数列表：
 * __for_recursive_0__0(i, begin_idx, end_idx, expand_macro, const_params, ...) __for_recursive_0_intl__0(i, begin_idx, end_idx, expand_macro, __pack_list__(const_params), __VA_ARGS__)
 *
 * 注意！__for_recursive__(n)、__while_recursive__(n)同种循环在嵌套时n必须不同，否则导致递归重入。
 */

/**
 * @brief 循环[begin_idx, begin_idx, end_idx)，使用方法为
 * 		  __for_recursive__(expand_id)(begin_idx, end_idx, expand_macro, const_params, elements...)
 * 		  expand_macro第一个参数必须是起始索引，第二个参数必须是终止索引（不包含），第三个参数必须是当前索引，第四个参数必须是expand_macro()所需的额外参数，迭代过程为
 * 		  expand_macro(begin_idx, end_idx, current_idx, const_params, expand_macro(begin_idx, end_idx, current_idx, const_params, elements...))
 */
#define __for_recursive__(expand_id) __catn__(3)(__for_recursive_, expand_id, _intl__)

/**
 * @brief 循环直到条件cond_macro(i, const_params, __VA_ARGS__)不满足，使用方法为
 * 		  __while_recursive__(expand_id)(cond_macro, const_params, expand_macro, const_params...)
 * 		  const_params()、expand_macro()第一个参数必须是当前索引，第二个参数必须是const_params，后续参数则为__VA_ARGS__。迭代过程为
 * 		  expand_macro(cond_macro, const_params, expand_macro, expand_macro(i, const_params, const_params...))
 */
#define __while_recursive__(expand_id) __catn__(3)(__while_recursive_, expand_id, _intl__)

#endif//_PPMP_RECURSIVELOOP
