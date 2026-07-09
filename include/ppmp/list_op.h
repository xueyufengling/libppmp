#ifndef _PPMP_LISTOP
#define _PPMP_LISTOP

#include "deferred_loop.h"
#include "loop.h"
#include "arith.h"

//使用延迟展开的实现，速度快，但嵌套容易导致递归重入

// 重复token列表
#define __repeat_token_deferred_intl__(i, ...)\
	__if_intl__(__not_equal__(i, 0))\
	(\
		__if_else_intl__(__not_equal__(i, 1))\
		(\
			__append_comma__(__VA_ARGS__),\
			__pack_list__(__VA_ARGS__)\
		)\
		__2_pass_alias__(__alias_repeat_token_deferred_intl__)(__dec__(i), __VA_ARGS__)\
	)
#define __alias_repeat_token_deferred_intl__() __repeat_token_deferred_intl__
#define __repeat_token_deferred__(expand_id, count, ...) __full_scan__(expand_id)(__repeat_token_deferred_intl__(count, __VA_ARGS__))

#define __cat_deferred_intl__(params_num, delim, result, cat_deferred_param, ...)\
	__if_intl__(__not_equal__(params_num, 0))\
	(\
		__if_else_intl__(__not_equal__(params_num, 1))\
		(\
			__3_pass_alias__(__alias_cat_deferred_intl__)(__dec__(params_num), delim, __catn__(3)(result, cat_deferred_param, delim), __VA_ARGS__),\
			__catn__(2)(result, cat_deferred_param)\
		)\
	)
#define __alias_cat_deferred_intl__() __cat_deferred_intl__
/**
 * @brief 拼接任意长度的token，变长参数列表的元素以delim隔开
 * 		  例如__cat_deferred__(_, a, b, c)将会得到a_b_c
 * 		  原理：使用了宏递归展开，由于外层有__if__()和__if_else__()两个宏包围，因此需要3 pass才能完整展开递归的目标宏
 */
#define __cat_deferred__(expand_id, delim, ...) __full_scan__(expand_id)(__cat_deferred_intl__(__numof__(__VA_ARGS__), delim, , __VA_ARGS__))

//反转
#define __inverse_deferred_intl__(params_num, ...)\
	__if_intl__(__not_equal__(params_num, 0))\
	(\
		__at__(__dec__(params_num))(__VA_ARGS__)\
		__if_intl__(__not_equal__(params_num, 1))\
		(\
			__comma__()\
		)\
		__2_pass_alias__(__alias_inverse_deferred_intl__)(__dec__(params_num), __VA_ARGS__)\
	)
#define __alias_inverse_deferred_intl__() __inverse_deferred_intl__
#define __inverse_deferred__(expand_id, ...) __full_scan__(expand_id)(__inverse_deferred_intl__(__numof__(__VA_ARGS__), __VA_ARGS__))

//替换
#define __replace_at_deferred_op_intl__(i, end_idx, e, target_idx, replace_value)\
	__if_else_intl__(__not_equal__(i, target_idx))\
	(\
		__if_else_intl__(__not_equal__(i, __dec__(end_idx)))\
		(\
			__append_comma__(e),\
			e\
		),\
		__if_else_intl__(__not_equal__(i, __dec__(end_idx)))\
		(\
			__append_comma__(replace_value),\
			replace_value\
		)\
	)
#define __replace_at_deferred__(expand_id, idx, value, ...) __for_each_deferred‌__(expand_id, __replace_at_deferred_op_intl__, __pack_list__(idx, value), __VA_ARGS__)

// 替换,为指定的分隔符
#define __replace_delim_deferred_op_intl__(i, begin_idx, end_idx, delim, ...)\
	__at__(i)(__VA_ARGS__)\
	__if_intl__(__not_equal__(i, __dec__(end_idx)))\
	(\
		delim\
	)
/**
 * @brief 将变长参数列表的每个参数末尾的分隔符','替换为delim，不同参数之间以空格隔开。
 * 		  例如__replace_delim__(, a, b, c)将得到a b c，而__replace_delim__(_, a, b, c)将得到a _ b _ c
 */
#define __replace_delim_deferred__(expand_id, delim, ...) __for_deferred‌__(expand_id, 0, __numof__(__VA_ARGS__), __replace_delim_deferred_op_intl__, delim, __VA_ARGS__)

//指定索引自增
#define __inc_at_deferred__(idx, ...) __replace_at_deferred__(expand_id, idx, __inc__(__at__(idx)(__VA_ARGS__)), __VA_ARGS__)

//指定索引自减
#define __dec_at_deferred__(idx, ...) __replace_at_deferred__(expand_id, idx, __dec__(__at__(idx)(__VA_ARGS__)), __VA_ARGS__)

//自增n次
#define __incn_deferred_intl__(i, n, x)\
    __if_else_intl__(__not_equal__(i, n))\
    (\
        __2_pass_alias__(__alias_incn_deferred_intl__)(__inc__(i), n, __inc__(x)),\
        x\
    )
#define __alias_incn_deferred_intl__() __incn_deferred_intl__
#define __incn_deferred__(expand_id, n, x) __full_scan__(expand_id)(__incn_deferred_intl__(0, n, x))

//自减n次
#define __decn_deferred_intl__(i, n, x)\
    __if_else_intl__(__not_equal__(i, n))\
    (\
        __2_pass_alias__(__alias_decn_deferred_intl__)(__inc__(i), n, __dec(x)),\
        x\
    )
#define __alias_decn_deferred_intl__() __decn_deferred_intl__
#define __decn_deferred__(expand_id, n, x) __full_scan__(expand_id)(__decn_deferred_intl__(0, n, x))

//使用多级展开的实现，速度慢，用于复杂嵌套中的展开求值

//替换
#define __replace_at_op_intl__(i, begin_idx, end_idx, target_idx, replace_value, e)\
	__if_else_intl__(__not_equal__(i, target_idx))\
	(\
		__if_else_intl__(__not_equal__(i, __dec__(end_idx)))\
		(\
			__append_comma__(e),\
			e\
		),\
		__if_else_intl__(__not_equal__(i, __dec__(end_idx)))\
		(\
			__append_comma__(replace_value),\
			replace_value\
		)\
	)
#define __replace_at__(expand_id, idx, value, ...)\
	__for_each__(expand_id)(__replace_at_op_intl__, __pack_list__(idx, value), __VA_ARGS__)

// 替换,为指定的分隔符
#define __replace_delim_op_intl__(i, begin_idx, end_idx, delim, e)\
	e\
	__if_intl__(__not_equal__(i, __dec__(end_idx)))\
	(\
		delim\
	)
/**
 * @brief 将变长参数列表的每个参数末尾的分隔符','替换为delim，不同参数之间以空格隔开。
 * 		  例如__replace_delim__(, a, b, c)将得到a b c，而__replace_delim__(_, a, b, c)将得到a _ b _ c
 */
#define __replace_delim__(expand_id, delim, ...)\
	__for_each__(expand_id)(__replace_delim_op_intl__, delim, __VA_ARGS__)

//指定索引自增
#define __inc_at__(expand_id, idx, ...) __replace_at__(expand_id, idx, __inc__(__at__(idx)(__VA_ARGS__)), __VA_ARGS__)

//指定索引自减
#define __dec_at__(expand_id, idx, ...) __replace_at__(expand_id, idx, __dec__(__at__(idx)(__VA_ARGS__)), __VA_ARGS__)

//自增n次
#define __incn_op_intl__(i, begin_idx, end_idx, nop, x) __inc__(x)
#define __incn__(expand_id, n, x) __for_recursive__(expand_id)(0, n, __incn_op_intl__, , x)

//自减n次
#define __decn_op_intl__(i, begin_idx, end_idx, nop, x) __dec__(x)
#define __decn__(expand_id, n, x) __for_recursive__(expand_id)(0, n, __decn_op_intl__, , x)

#endif //_PPMP_LISTOP
