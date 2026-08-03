#if defined(__pp_expr__)

#if ((__pp_expr__()) / 10000000) % 10 == 0
#if ((__pp_expr__()) / 10000000) >= 10
#undef __pp_op_2_7__
#define __pp_op_2_7__() 0
#else
#undef __pp_op_2_7__
#define __pp_op_2_7__()
#endif
#elif ((__pp_expr__()) / 10000000) % 10 == 1
#undef __pp_op_2_7__
#define __pp_op_2_7__() 1
#elif ((__pp_expr__()) / 10000000) % 10 == 2
#undef __pp_op_2_7__
#define __pp_op_2_7__() 2
#elif ((__pp_expr__()) / 10000000) % 10 == 3
#undef __pp_op_2_7__
#define __pp_op_2_7__() 3
#elif ((__pp_expr__()) / 10000000) % 10 == 4
#undef __pp_op_2_7__
#define __pp_op_2_7__() 4
#elif ((__pp_expr__()) / 10000000) % 10 == 5
#undef __pp_op_2_7__
#define __pp_op_2_7__() 5
#elif ((__pp_expr__()) / 10000000) % 10 == 6
#undef __pp_op_2_7__
#define __pp_op_2_7__() 6
#elif ((__pp_expr__()) / 10000000) % 10 == 7
#undef __pp_op_2_7__
#define __pp_op_2_7__() 7
#elif ((__pp_expr__()) / 10000000) % 10 == 8
#undef __pp_op_2_7__
#define __pp_op_2_7__() 8
#elif ((__pp_expr__()) / 10000000) % 10 == 9
#undef __pp_op_2_7__
#define __pp_op_2_7__() 9
#endif

#else

#error "store digit 7 in 'pp_op' 2 failed. expr '__pp_expr__()' not defined"

#endif
