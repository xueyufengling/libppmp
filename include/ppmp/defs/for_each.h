#ifndef _PPMP_DEFS_FOREACH
#define _PPMP_DEFS_FOREACH

#define __for_each_0_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_0_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_0_intl__() __for_each_0_intl__
#define __for_each__0(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(0)(__for_each_0_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_1_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_1_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_1_intl__() __for_each_1_intl__
#define __for_each__1(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(1)(__for_each_1_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_2_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_2_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_2_intl__() __for_each_2_intl__
#define __for_each__2(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(2)(__for_each_2_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_3_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_3_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_3_intl__() __for_each_3_intl__
#define __for_each__3(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(3)(__for_each_3_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_4_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_4_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_4_intl__() __for_each_4_intl__
#define __for_each__4(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(4)(__for_each_4_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_5_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_5_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_5_intl__() __for_each_5_intl__
#define __for_each__5(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(5)(__for_each_5_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_6_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_6_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_6_intl__() __for_each_6_intl__
#define __for_each__6(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(6)(__for_each_6_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_7_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_7_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_7_intl__() __for_each_7_intl__
#define __for_each__7(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(7)(__for_each_7_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_8_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_8_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_8_intl__() __for_each_8_intl__
#define __for_each__8(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(8)(__for_each_8_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_9_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_9_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_9_intl__() __for_each_9_intl__
#define __for_each__9(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(9)(__for_each_9_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_10_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_10_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_10_intl__() __for_each_10_intl__
#define __for_each__10(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(10)(__for_each_10_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_11_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_11_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_11_intl__() __for_each_11_intl__
#define __for_each__11(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(11)(__for_each_11_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_12_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_12_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_12_intl__() __for_each_12_intl__
#define __for_each__12(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(12)(__for_each_12_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_13_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_13_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_13_intl__() __for_each_13_intl__
#define __for_each__13(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(13)(__for_each_13_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_14_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_14_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_14_intl__() __for_each_14_intl__
#define __for_each__14(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(14)(__for_each_14_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_15_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_15_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_15_intl__() __for_each_15_intl__
#define __for_each__15(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(15)(__for_each_15_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)
#define __for_each_16_intl__(i, end_idx, expand_macro, const_params, e, ...)\
	__if_intl__(__not_equal__(i, end_idx))\
	(\
		expand_macro(i, 0, end_idx, const_params, e)\
		__pass_alias__(2, __alias_for_each_16_intl__)(__inc__(i), end_idx, expand_macro, __forward_deferred__(2)(const_params), __VA_ARGS__)\
	)
#define __alias_for_each_16_intl__() __for_each_16_intl__
#define __for_each__16(expand_macro, const_params, ...)\
	__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\
	(\
		__clause__\
		(\
			__full_scan__(16)(__for_each_16_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\
		)\
	)

#endif
