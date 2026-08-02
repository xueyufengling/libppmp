#if defined(__pp_expr__)

#undef __pp_op_3_5__

#if ((__pp_expr__()) / 100000) % 10 == 0
#if ((__pp_expr__()) / 100000) >= 10
#define __pp_op_3_5__() 0
#else
#define __pp_op_3_5__()
#endif
#elif ((__pp_expr__()) / 100000) % 10 == 1
#define __pp_op_3_5__() 1
#elif ((__pp_expr__()) / 100000) % 10 == 2
#define __pp_op_3_5__() 2
#elif ((__pp_expr__()) / 100000) % 10 == 3
#define __pp_op_3_5__() 3
#elif ((__pp_expr__()) / 100000) % 10 == 4
#define __pp_op_3_5__() 4
#elif ((__pp_expr__()) / 100000) % 10 == 5
#define __pp_op_3_5__() 5
#elif ((__pp_expr__()) / 100000) % 10 == 6
#define __pp_op_3_5__() 6
#elif ((__pp_expr__()) / 100000) % 10 == 7
#define __pp_op_3_5__() 7
#elif ((__pp_expr__()) / 100000) % 10 == 8
#define __pp_op_3_5__() 8
#elif ((__pp_expr__()) / 100000) % 10 == 9
#define __pp_op_3_5__() 9
#endif

#else

#error "store digit 5 in 'pp_op' 3 failed. expr '__pp_expr__' not defined"

#endif
