#ifndef _PPMP_DEFS_FOR
#define _PPMP_DEFS_FOR

#define __for_0_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_0_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_0_intl__() __for_0_intl__
#define __for__0(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(0)(__for_0_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_1_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_1_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_1_intl__() __for_1_intl__
#define __for__1(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(1)(__for_1_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_2_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_2_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_2_intl__() __for_2_intl__
#define __for__2(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(2)(__for_2_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_3_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_3_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_3_intl__() __for_3_intl__
#define __for__3(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(3)(__for_3_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_4_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_4_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_4_intl__() __for_4_intl__
#define __for__4(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(4)(__for_4_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_5_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_5_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_5_intl__() __for_5_intl__
#define __for__5(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(5)(__for_5_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_6_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_6_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_6_intl__() __for_6_intl__
#define __for__6(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(6)(__for_6_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_7_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_7_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_7_intl__() __for_7_intl__
#define __for__7(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(7)(__for_7_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_8_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_8_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_8_intl__() __for_8_intl__
#define __for__8(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(8)(__for_8_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_9_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_9_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_9_intl__() __for_9_intl__
#define __for__9(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(9)(__for_9_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_10_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_10_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_10_intl__() __for_10_intl__
#define __for__10(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(10)(__for_10_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_11_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_11_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_11_intl__() __for_11_intl__
#define __for__11(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(11)(__for_11_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_12_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_12_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_12_intl__() __for_12_intl__
#define __for__12(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(12)(__for_12_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_13_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_13_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_13_intl__() __for_13_intl__
#define __for__13(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(13)(__for_13_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_14_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_14_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_14_intl__() __for_14_intl__
#define __for__14(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(14)(__for_14_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_15_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_15_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_15_intl__() __for_15_intl__
#define __for__15(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(15)(__for_15_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))
#define __for_16_intl__(i, begin_idx, end_idx, expand_macro, const_params, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_for_16_intl__)(__inc__(i), begin_idx, end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_16_intl__() __for_16_intl__
#define __for__16(begin_idx, end_idx, expand_macro, const_params, ...) __full_scan__(16)(__for_16_intl__(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__))

#endif
