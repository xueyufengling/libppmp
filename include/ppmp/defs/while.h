#ifndef _PPMP_DEFS_WHILE
#define _PPMP_DEFS_WHILE

#define __while_0_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_0_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_0_intl__() __while_0_intl__
#define __while__0(cond_macro, cond_params, expand_macro, ...) __full_scan__(0)(__while_0_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_1_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_1_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_1_intl__() __while_1_intl__
#define __while__1(cond_macro, cond_params, expand_macro, ...) __full_scan__(1)(__while_1_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_2_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_2_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_2_intl__() __while_2_intl__
#define __while__2(cond_macro, cond_params, expand_macro, ...) __full_scan__(2)(__while_2_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_3_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_3_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_3_intl__() __while_3_intl__
#define __while__3(cond_macro, cond_params, expand_macro, ...) __full_scan__(3)(__while_3_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_4_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_4_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_4_intl__() __while_4_intl__
#define __while__4(cond_macro, cond_params, expand_macro, ...) __full_scan__(4)(__while_4_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_5_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_5_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_5_intl__() __while_5_intl__
#define __while__5(cond_macro, cond_params, expand_macro, ...) __full_scan__(5)(__while_5_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_6_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_6_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_6_intl__() __while_6_intl__
#define __while__6(cond_macro, cond_params, expand_macro, ...) __full_scan__(6)(__while_6_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_7_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_7_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_7_intl__() __while_7_intl__
#define __while__7(cond_macro, cond_params, expand_macro, ...) __full_scan__(7)(__while_7_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_8_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_8_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_8_intl__() __while_8_intl__
#define __while__8(cond_macro, cond_params, expand_macro, ...) __full_scan__(8)(__while_8_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_9_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_9_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_9_intl__() __while_9_intl__
#define __while__9(cond_macro, cond_params, expand_macro, ...) __full_scan__(9)(__while_9_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_10_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_10_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_10_intl__() __while_10_intl__
#define __while__10(cond_macro, cond_params, expand_macro, ...) __full_scan__(10)(__while_10_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_11_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_11_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_11_intl__() __while_11_intl__
#define __while__11(cond_macro, cond_params, expand_macro, ...) __full_scan__(11)(__while_11_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_12_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_12_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_12_intl__() __while_12_intl__
#define __while__12(cond_macro, cond_params, expand_macro, ...) __full_scan__(12)(__while_12_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_13_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_13_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_13_intl__() __while_13_intl__
#define __while__13(cond_macro, cond_params, expand_macro, ...) __full_scan__(13)(__while_13_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_14_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_14_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_14_intl__() __while_14_intl__
#define __while__14(cond_macro, cond_params, expand_macro, ...) __full_scan__(14)(__while_14_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_15_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_15_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_15_intl__() __while_15_intl__
#define __while__15(cond_macro, cond_params, expand_macro, ...) __full_scan__(15)(__while_15_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))
#define __while_16_intl__(i, cond_macro, cond_params, expand_macro, ...)\
	__if__(cond_macro(i, cond_params, __VA_ARGS__))\
	(\
		expand_macro(i, cond_params, __VA_ARGS__)\
		__pass_alias__(2, __alias_while_16_intl__)(__inc__(i), cond_macro, __forward_deferred__(2)(cond_params), expand_macro, __VA_ARGS__)\
	)
#define __alias_while_16_intl__() __while_16_intl__
#define __while__16(cond_macro, cond_params, expand_macro, ...) __full_scan__(16)(__while_16_intl__(0, cond_macro, __forward__(cond_params), expand_macro, __VA_ARGS__))

#endif
