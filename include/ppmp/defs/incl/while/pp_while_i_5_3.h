#if defined(__pp_expr_while_i__)

#if ((__pp_expr_while_i__()) / 1000) % 10 == 0
#if ((__pp_expr_while_i__()) / 1000) >= 10
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 0
#else
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__()
#endif
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 1
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 1
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 2
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 2
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 3
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 3
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 4
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 4
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 5
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 5
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 6
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 6
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 7
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 7
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 8
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 8
#elif ((__pp_expr_while_i__()) / 1000) % 10 == 9
#undef __pp_while_i_5_3__
#define __pp_while_i_5_3__() 9
#endif

#else

#error "store digit 3 in 'pp_while_i' 5 failed. expr '__pp_expr_while_i__()' not defined"

#endif
