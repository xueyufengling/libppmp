#if defined(__pp_expr__)

#undef __pp_op_13_1__

#if ((__pp_expr__()) / 10) % 10 == 0
#if ((__pp_expr__()) / 10) >= 10
#define __pp_op_13_1__() 0
#else
#define __pp_op_13_1__()
#endif
#elif ((__pp_expr__()) / 10) % 10 == 1
#define __pp_op_13_1__() 1
#elif ((__pp_expr__()) / 10) % 10 == 2
#define __pp_op_13_1__() 2
#elif ((__pp_expr__()) / 10) % 10 == 3
#define __pp_op_13_1__() 3
#elif ((__pp_expr__()) / 10) % 10 == 4
#define __pp_op_13_1__() 4
#elif ((__pp_expr__()) / 10) % 10 == 5
#define __pp_op_13_1__() 5
#elif ((__pp_expr__()) / 10) % 10 == 6
#define __pp_op_13_1__() 6
#elif ((__pp_expr__()) / 10) % 10 == 7
#define __pp_op_13_1__() 7
#elif ((__pp_expr__()) / 10) % 10 == 8
#define __pp_op_13_1__() 8
#elif ((__pp_expr__()) / 10) % 10 == 9
#define __pp_op_13_1__() 9
#endif

#else

#error "store digit 1 in 'pp_op' 13 failed. expr '__pp_expr__' not defined"

#endif
