#if defined(__pp_expr__)

#if ((__pp_expr__()) / 1000000000000) % 10 == 0
#if ((__pp_expr__()) / 1000000000000) >= 10
#undef __pp_op_7_12__
#define __pp_op_7_12__() 0
#else
#undef __pp_op_7_12__
#define __pp_op_7_12__()
#endif
#elif ((__pp_expr__()) / 1000000000000) % 10 == 1
#undef __pp_op_7_12__
#define __pp_op_7_12__() 1
#elif ((__pp_expr__()) / 1000000000000) % 10 == 2
#undef __pp_op_7_12__
#define __pp_op_7_12__() 2
#elif ((__pp_expr__()) / 1000000000000) % 10 == 3
#undef __pp_op_7_12__
#define __pp_op_7_12__() 3
#elif ((__pp_expr__()) / 1000000000000) % 10 == 4
#undef __pp_op_7_12__
#define __pp_op_7_12__() 4
#elif ((__pp_expr__()) / 1000000000000) % 10 == 5
#undef __pp_op_7_12__
#define __pp_op_7_12__() 5
#elif ((__pp_expr__()) / 1000000000000) % 10 == 6
#undef __pp_op_7_12__
#define __pp_op_7_12__() 6
#elif ((__pp_expr__()) / 1000000000000) % 10 == 7
#undef __pp_op_7_12__
#define __pp_op_7_12__() 7
#elif ((__pp_expr__()) / 1000000000000) % 10 == 8
#undef __pp_op_7_12__
#define __pp_op_7_12__() 8
#elif ((__pp_expr__()) / 1000000000000) % 10 == 9
#undef __pp_op_7_12__
#define __pp_op_7_12__() 9
#endif

#else

#error "store digit 12 in 'pp_op' 7 failed. expr '__pp_expr__()' not defined"

#endif
