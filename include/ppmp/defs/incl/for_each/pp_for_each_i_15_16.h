#if defined(__pp_expr_for_each_i__)

#if ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 0
#if ((__pp_expr_for_each_i__()) / 10000000000000000) >= 10
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 0
#else
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__()
#endif
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 1
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 1
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 2
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 2
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 3
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 3
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 4
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 4
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 5
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 5
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 6
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 6
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 7
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 7
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 8
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 8
#elif ((__pp_expr_for_each_i__()) / 10000000000000000) % 10 == 9
#undef __pp_for_each_i_15_16__
#define __pp_for_each_i_15_16__() 9
#endif

#else

#error "store digit 16 in 'pp_for_each_i' 15 failed. expr '__pp_expr_for_each_i__()' not defined"

#endif
