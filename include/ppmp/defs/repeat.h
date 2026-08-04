#ifndef _PPMP_DEFS_REPEAT
#define _PPMP_DEFS_REPEAT

#define __repeat_0_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_0_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_0_intl__() __repeat_0_intl__
#define __repeat__0(count, expand_macro, ...) __full_scan__(0)(__repeat_0_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_1_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_1_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_1_intl__() __repeat_1_intl__
#define __repeat__1(count, expand_macro, ...) __full_scan__(1)(__repeat_1_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_2_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_2_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_2_intl__() __repeat_2_intl__
#define __repeat__2(count, expand_macro, ...) __full_scan__(2)(__repeat_2_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_3_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_3_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_3_intl__() __repeat_3_intl__
#define __repeat__3(count, expand_macro, ...) __full_scan__(3)(__repeat_3_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_4_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_4_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_4_intl__() __repeat_4_intl__
#define __repeat__4(count, expand_macro, ...) __full_scan__(4)(__repeat_4_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_5_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_5_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_5_intl__() __repeat_5_intl__
#define __repeat__5(count, expand_macro, ...) __full_scan__(5)(__repeat_5_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_6_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_6_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_6_intl__() __repeat_6_intl__
#define __repeat__6(count, expand_macro, ...) __full_scan__(6)(__repeat_6_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_7_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_7_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_7_intl__() __repeat_7_intl__
#define __repeat__7(count, expand_macro, ...) __full_scan__(7)(__repeat_7_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_8_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_8_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_8_intl__() __repeat_8_intl__
#define __repeat__8(count, expand_macro, ...) __full_scan__(8)(__repeat_8_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_9_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_9_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_9_intl__() __repeat_9_intl__
#define __repeat__9(count, expand_macro, ...) __full_scan__(9)(__repeat_9_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_10_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_10_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_10_intl__() __repeat_10_intl__
#define __repeat__10(count, expand_macro, ...) __full_scan__(10)(__repeat_10_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_11_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_11_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_11_intl__() __repeat_11_intl__
#define __repeat__11(count, expand_macro, ...) __full_scan__(11)(__repeat_11_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_12_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_12_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_12_intl__() __repeat_12_intl__
#define __repeat__12(count, expand_macro, ...) __full_scan__(12)(__repeat_12_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_13_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_13_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_13_intl__() __repeat_13_intl__
#define __repeat__13(count, expand_macro, ...) __full_scan__(13)(__repeat_13_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_14_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_14_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_14_intl__() __repeat_14_intl__
#define __repeat__14(count, expand_macro, ...) __full_scan__(14)(__repeat_14_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_15_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_15_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_15_intl__() __repeat_15_intl__
#define __repeat__15(count, expand_macro, ...) __full_scan__(15)(__repeat_15_intl__(0, count, expand_macro, __VA_ARGS__))
#define __repeat_16_intl__(i, count, expand_macro, ...)\
	__if_intl__(__not_equal__(i, __dec(count)))\
	(\
		expand_macro(i, count, __VA_ARGS__)\
		__pass_alias__(2, __alias_repeat_16_intl__)(__inc__(i), count, expand_macro, __VA_ARGS__)\
	)
#define __alias_repeat_16_intl__() __repeat_16_intl__
#define __repeat__16(count, expand_macro, ...) __full_scan__(16)(__repeat_16_intl__(0, count, expand_macro, __VA_ARGS__))

#endif
