#if defined(__pp_expr__)

#undef __pp_op_7_12__

#if ((__pp_expr__()) / 1000000000000) % 10 == 0
#if ((__pp_expr__()) / 1000000000000) >= 10
#define __pp_op_7_12__() 0
#else
#define __pp_op_7_12__()
#endif
#elif ((__pp_expr__()) / 1000000000000) % 10 == 1
#define __pp_op_7_12__() 1
#elif ((__pp_expr__()) / 1000000000000) % 10 == 2
#define __pp_op_7_12__() 2
#elif ((__pp_expr__()) / 1000000000000) % 10 == 3
#define __pp_op_7_12__() 3
#elif ((__pp_expr__()) / 1000000000000) % 10 == 4
#define __pp_op_7_12__() 4
#elif ((__pp_expr__()) / 1000000000000) % 10 == 5
#define __pp_op_7_12__() 5
#elif ((__pp_expr__()) / 1000000000000) % 10 == 6
#define __pp_op_7_12__() 6
#elif ((__pp_expr__()) / 1000000000000) % 10 == 7
#define __pp_op_7_12__() 7
#elif ((__pp_expr__()) / 1000000000000) % 10 == 8
#define __pp_op_7_12__() 8
#elif ((__pp_expr__()) / 1000000000000) % 10 == 9
#define __pp_op_7_12__() 9
#endif

#else

#error "store digit 12 in 'pp_op' 7 failed. expr '__pp_expr__' not defined"

#endif
