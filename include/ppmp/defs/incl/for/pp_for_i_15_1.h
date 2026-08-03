#if defined(__pp_expr_for_i__)

#if ((__pp_expr_for_i__()) / 10) % 10 == 0
#if ((__pp_expr_for_i__()) / 10) >= 10
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 0
#else
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__()
#endif
#elif ((__pp_expr_for_i__()) / 10) % 10 == 1
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 1
#elif ((__pp_expr_for_i__()) / 10) % 10 == 2
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 2
#elif ((__pp_expr_for_i__()) / 10) % 10 == 3
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 3
#elif ((__pp_expr_for_i__()) / 10) % 10 == 4
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 4
#elif ((__pp_expr_for_i__()) / 10) % 10 == 5
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 5
#elif ((__pp_expr_for_i__()) / 10) % 10 == 6
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 6
#elif ((__pp_expr_for_i__()) / 10) % 10 == 7
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 7
#elif ((__pp_expr_for_i__()) / 10) % 10 == 8
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 8
#elif ((__pp_expr_for_i__()) / 10) % 10 == 9
#undef __pp_for_i_15_1__
#define __pp_for_i_15_1__() 9
#endif

#else

#error "store digit 1 in 'pp_for_i' 15 failed. expr '__pp_expr_for_i__()' not defined"

#endif
