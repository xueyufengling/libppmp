#if defined(__pp_expr__)

#undef __pp_op_15_0__

#if (__pp_expr__()) % 10 == 0
#if (__pp_expr__()) >= 10
#define __pp_op_15_0__() 0
#else
#define __pp_op_15_0__()
#endif
#elif (__pp_expr__()) % 10 == 1
#define __pp_op_15_0__() 1
#elif (__pp_expr__()) % 10 == 2
#define __pp_op_15_0__() 2
#elif (__pp_expr__()) % 10 == 3
#define __pp_op_15_0__() 3
#elif (__pp_expr__()) % 10 == 4
#define __pp_op_15_0__() 4
#elif (__pp_expr__()) % 10 == 5
#define __pp_op_15_0__() 5
#elif (__pp_expr__()) % 10 == 6
#define __pp_op_15_0__() 6
#elif (__pp_expr__()) % 10 == 7
#define __pp_op_15_0__() 7
#elif (__pp_expr__()) % 10 == 8
#define __pp_op_15_0__() 8
#elif (__pp_expr__()) % 10 == 9
#define __pp_op_15_0__() 9
#endif

#else

#error "store digit 0 in 'pp_op' 15 failed. expr '__pp_expr__' not defined"

#endif
