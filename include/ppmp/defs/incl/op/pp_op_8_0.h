#if defined(__pp_expr__)

#if (__pp_expr__()) % 10 == 0
#if (__pp_expr__()) >= 10
#undef __pp_op_8_0__
#define __pp_op_8_0__() 0
#else
#undef __pp_op_8_0__
#define __pp_op_8_0__()
#endif
#elif (__pp_expr__()) % 10 == 1
#undef __pp_op_8_0__
#define __pp_op_8_0__() 1
#elif (__pp_expr__()) % 10 == 2
#undef __pp_op_8_0__
#define __pp_op_8_0__() 2
#elif (__pp_expr__()) % 10 == 3
#undef __pp_op_8_0__
#define __pp_op_8_0__() 3
#elif (__pp_expr__()) % 10 == 4
#undef __pp_op_8_0__
#define __pp_op_8_0__() 4
#elif (__pp_expr__()) % 10 == 5
#undef __pp_op_8_0__
#define __pp_op_8_0__() 5
#elif (__pp_expr__()) % 10 == 6
#undef __pp_op_8_0__
#define __pp_op_8_0__() 6
#elif (__pp_expr__()) % 10 == 7
#undef __pp_op_8_0__
#define __pp_op_8_0__() 7
#elif (__pp_expr__()) % 10 == 8
#undef __pp_op_8_0__
#define __pp_op_8_0__() 8
#elif (__pp_expr__()) % 10 == 9
#undef __pp_op_8_0__
#define __pp_op_8_0__() 9
#endif

#else

#error "store digit 0 in 'pp_op' 8 failed. expr '__pp_expr__()' not defined"

#endif
