#if defined(__pp_expr__)

#undef __pp_op_9_13__

#if ((__pp_expr__()) / 10000000000000) % 10 == 0
#if ((__pp_expr__()) / 10000000000000) >= 10
#define __pp_op_9_13__() 0
#else
#define __pp_op_9_13__()
#endif
#elif ((__pp_expr__()) / 10000000000000) % 10 == 1
#define __pp_op_9_13__() 1
#elif ((__pp_expr__()) / 10000000000000) % 10 == 2
#define __pp_op_9_13__() 2
#elif ((__pp_expr__()) / 10000000000000) % 10 == 3
#define __pp_op_9_13__() 3
#elif ((__pp_expr__()) / 10000000000000) % 10 == 4
#define __pp_op_9_13__() 4
#elif ((__pp_expr__()) / 10000000000000) % 10 == 5
#define __pp_op_9_13__() 5
#elif ((__pp_expr__()) / 10000000000000) % 10 == 6
#define __pp_op_9_13__() 6
#elif ((__pp_expr__()) / 10000000000000) % 10 == 7
#define __pp_op_9_13__() 7
#elif ((__pp_expr__()) / 10000000000000) % 10 == 8
#define __pp_op_9_13__() 8
#elif ((__pp_expr__()) / 10000000000000) % 10 == 9
#define __pp_op_9_13__() 9
#endif

#else

#error "store digit 13 in 'pp_op' 9 failed. expr '__pp_expr__' not defined"

#endif
