#if defined(__pp_expr_for_each_i__)

#if ((__pp_expr_for_each_i__()) / 100) % 10 == 0
#if ((__pp_expr_for_each_i__()) / 100) >= 10
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 0
#else
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__()
#endif
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 1
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 1
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 2
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 2
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 3
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 3
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 4
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 4
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 5
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 5
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 6
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 6
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 7
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 7
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 8
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 8
#elif ((__pp_expr_for_each_i__()) / 100) % 10 == 9
#undef __pp_for_each_i_10_2__
#define __pp_for_each_i_10_2__() 9
#endif

#else

#error "store digit 2 in 'pp_for_each_i' 10 failed. expr '__pp_expr_for_each_i__()' not defined"

#endif
