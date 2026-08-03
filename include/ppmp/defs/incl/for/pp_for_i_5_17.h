#if defined(__pp_expr_for_i__)

#if ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 0
#if ((__pp_expr_for_i__()) / 100000000000000000) >= 10
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 0
#else
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__()
#endif
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 1
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 1
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 2
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 2
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 3
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 3
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 4
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 4
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 5
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 5
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 6
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 6
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 7
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 7
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 8
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 8
#elif ((__pp_expr_for_i__()) / 100000000000000000) % 10 == 9
#undef __pp_for_i_5_17__
#define __pp_for_i_5_17__() 9
#endif

#else

#error "store digit 17 in 'pp_for_i' 5 failed. expr '__pp_expr_for_i__()' not defined"

#endif
