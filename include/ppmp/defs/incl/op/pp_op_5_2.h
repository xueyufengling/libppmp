#if defined(__pp_expr__)

#if ((__pp_expr__()) / 100) % 10 == 0
#if ((__pp_expr__()) / 100) >= 10
#undef __pp_op_5_2__
#define __pp_op_5_2__() 0
#else
#undef __pp_op_5_2__
#define __pp_op_5_2__()
#endif
#elif ((__pp_expr__()) / 100) % 10 == 1
#undef __pp_op_5_2__
#define __pp_op_5_2__() 1
#elif ((__pp_expr__()) / 100) % 10 == 2
#undef __pp_op_5_2__
#define __pp_op_5_2__() 2
#elif ((__pp_expr__()) / 100) % 10 == 3
#undef __pp_op_5_2__
#define __pp_op_5_2__() 3
#elif ((__pp_expr__()) / 100) % 10 == 4
#undef __pp_op_5_2__
#define __pp_op_5_2__() 4
#elif ((__pp_expr__()) / 100) % 10 == 5
#undef __pp_op_5_2__
#define __pp_op_5_2__() 5
#elif ((__pp_expr__()) / 100) % 10 == 6
#undef __pp_op_5_2__
#define __pp_op_5_2__() 6
#elif ((__pp_expr__()) / 100) % 10 == 7
#undef __pp_op_5_2__
#define __pp_op_5_2__() 7
#elif ((__pp_expr__()) / 100) % 10 == 8
#undef __pp_op_5_2__
#define __pp_op_5_2__() 8
#elif ((__pp_expr__()) / 100) % 10 == 9
#undef __pp_op_5_2__
#define __pp_op_5_2__() 9
#endif

#else

#error "store digit 2 in 'pp_op' 5 failed. expr '__pp_expr__()' not defined"

#endif
