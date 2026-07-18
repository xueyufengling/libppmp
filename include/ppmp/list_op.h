#ifndef _PPMP_LISTOP
#define _PPMP_LISTOP

#include "base.h"
#include "list_op_step.h"
#include "loop.h"

/**
 * 使用延迟展开的实现，循环中使用时注意expand_id必须不同，否则导致递归重入
 */

// 重复token列表
#define __repeat_token_intl__(i, ...)\
	__if_intl__(__not_equal__(i, 0))\
	(\
		__if_else_intl__(__not_equal__(i, 1))\
		(\
			__append_comma__(__VA_ARGS__),\
			__pack_list__(__VA_ARGS__)\
		)\
		__pass_alias__(2, __alias_repeat_token_intl__)(__dec__(i), __VA_ARGS__)\
	)
#define __alias_repeat_token_intl__() __repeat_token_intl__
#define __repeat_token__(expand_id, count, ...) __full_scan__(expand_id)(__repeat_token_intl__(count, __VA_ARGS__))

#define __cat_list_intl__(params_num, delim, result, cat_list_param, ...)\
	__if_intl__(__not_equal__(params_num, 0))\
	(\
		__if_else_intl__(__not_equal__(params_num, 1))\
		(\
			__pass_alias__(3, __alias_cat_list_intl__)(__dec__(params_num), delim, __cat__(3, result, cat_list_param, delim), __VA_ARGS__),\
			__cat__(2, result, cat_list_param)\
		)\
	)
#define __alias_cat_list_intl__() __cat_list_intl__
/**
 * @brief 拼接任意长度的token，变长参数列表的元素以delim隔开
 *		例如__cat_list__(_, a, b, c)将会得到a_b_c
 *		原理：使用了宏递归展开，由于外层有__if__()和__if_else__()两个宏包围，因此需要3 pass才能完整展开递归的目标宏
 */
#define __cat_list__(expand_id, delim, ...) __full_scan__(expand_id)(__cat_list_intl__(__sizeof__(__VA_ARGS__), delim, , __VA_ARGS__))

// 反转
#define __inverse_intl__(params_num, ...)\
	__if_intl__(__not_equal__(params_num, 0))\
	(\
		__at__(__dec__(params_num))(__VA_ARGS__)\
		__if_intl__(__not_equal__(params_num, 1))\
		(\
			__comma__()\
		)\
		__pass_alias__(2, __alias_inverse_intl__)(__dec__(params_num), __VA_ARGS__)\
	)
#define __alias_inverse_intl__() __inverse_intl__
#define __inverse__(expand_id, ...) __full_scan__(expand_id)(__inverse_intl__(__sizeof__(__VA_ARGS__), __VA_ARGS__))

// 替换
#define __replace_at_op_intl__(i, begin_idx, end_idx, target_idx, replace_value, e)\
	__if_else_intl__(__not_equal__(i, target_idx))\
	(\
		__append_to_list_step__(i, end_idx, e),\
		__append_to_list_step__(i, end_idx, replace_value)\
	)
#define __replace_at__(expand_id, idx, value, ...) __for_each__(expand_id)(__replace_at_op_intl__, __pack_list__(idx, value), __VA_ARGS__)

// 过滤并保留满足条件的元素形成列表
/**
 * __filter_op_intl__()宏的变长参数列表为const_params, e
 * __va_opt_comma__(const_params)是为了使得无const_params时取消它的占位，否则传入cond_macro()宏的参数列表就变成, e而非e。
 */
#define __filter_op_intl__(i, begin_idx, end_idx, cond_macro, const_params_size, ...)\
	__if_intl__(cond_macro(i, begin_idx, end_idx, __VA_ARGS__))\
	(\
		__append_comma__(__list_rest__(const_params_size)(__VA_ARGS__))\
	)
#define __filter__(expand_id, cond_macro, const_params, ...) __strip_trailing_1_comma__(__for_each__(expand_id)(__filter_op_intl__, __pack_list__(cond_macro, __sizeof__(const_params) __va_opt_comma__(const_params) const_params), __VA_ARGS__))

#define __list_rm_empty_cond__(i, begin_idx, end_idx, ...) __not_intl__(__is_empty__(__VA_ARGS__))
#define __list_rm_empty__(expand_id, ...)\
	__filter__(expand_id, __list_rm_empty_cond__, , __VA_ARGS__)

// 替换,为指定的分隔符
#define __replace_delim_op_intl__(i, begin_idx, end_idx, delim, ...)\
	__at__(i)(__VA_ARGS__)\
	__if_intl__(__not_equal__(i, __dec__(end_idx)))\
	(\
		delim\
	)
/**
 * @brief 将变长参数列表的每个参数末尾的分隔符','替换为delim，不同参数之间以空格隔开。
 *		例如__replace_delim__(, a, b, c)将得到a b c，而__replace_delim__(_, a, b, c)将得到a _ b _ c
 */
#define __replace_delim__(expand_id, delim, ...) __for__(expand_id)(0, __sizeof__(__VA_ARGS__), __replace_delim_op_intl__, delim, __VA_ARGS__)

// 指定索引自增
#define __inc_at__(expand_id, idx, ...) __replace_at__(expand_id, idx, __inc__(__at__(idx)(__VA_ARGS__)), __VA_ARGS__)

// 指定索引自减
#define __dec_at__(expand_id, idx, ...) __replace_at__(expand_id, idx, __dec__(__at__(idx)(__VA_ARGS__)), __VA_ARGS__)

// 自增n次
#define __incn_intl__(i, n, x)\
	__if_else_intl__(__not_equal__(i, n))\
	(\
		__pass_alias__(2, __incn_intl__)(__inc__(i), n, __inc__(x)),\
		x\
	)
#define __incn__(expand_id, n, x) __full_scan__(expand_id)(__incn_intl__(0, n, x))

// 自减n次
#define __decn_intl__(i, n, x)\
	__if_else_intl__(__not_equal__(i, n))\
	(\
		__pass_alias__(2, __decn_intl__)(__inc__(i), n, __dec__(x)),\
		x\
	)
#define __decn__(expand_id, n, x) __full_scan__(expand_id)(__decn_intl__(0, n, x))

#endif // _PPMP_LISTOP
