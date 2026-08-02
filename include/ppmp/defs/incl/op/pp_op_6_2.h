#if defined(__pp_expr__)

#undef __pp_op_6_2__

#if ((__pp_expr__()) / 100) % 10 == 0
#if ((__pp_expr__()) / 100) >= 10
#define __pp_op_6_2__() 0
#else
#define __pp_op_6_2__()
#endif
#elif ((__pp_expr__()) / 100) % 10 == 1
#define __pp_op_6_2__() 1
#elif ((__pp_expr__()) / 100) % 10 == 2
#define __pp_op_6_2__() 2
#elif ((__pp_expr__()) / 100) % 10 == 3
#define __pp_op_6_2__() 3
#elif ((__pp_expr__()) / 100) % 10 == 4
#define __pp_op_6_2__() 4
#elif ((__pp_expr__()) / 100) % 10 == 5
#define __pp_op_6_2__() 5
#elif ((__pp_expr__()) / 100) % 10 == 6
#define __pp_op_6_2__() 6
#elif ((__pp_expr__()) / 100) % 10 == 7
#define __pp_op_6_2__() 7
#elif ((__pp_expr__()) / 100) % 10 == 8
#define __pp_op_6_2__() 8
#elif ((__pp_expr__()) / 100) % 10 == 9
#define __pp_op_6_2__() 9
#endif

#else

#error "store digit 2 in 'pp_op' 6 failed. expr '__pp_expr__' not defined"

#endif
