#if defined(__pp_expr__)

#undef __pp_op_10_0__

#if (__pp_expr__()) == 0

#define __pp_op_10_0__() 0
#define __pp_op_10_1__()
#define __pp_op_10_2__()
#define __pp_op_10_3__()
#define __pp_op_10_4__()
#define __pp_op_10_5__()
#define __pp_op_10_6__()
#define __pp_op_10_7__()
#define __pp_op_10_8__()
#define __pp_op_10_9__()
#define __pp_op_10_10__()
#define __pp_op_10_11__()
#define __pp_op_10_12__()
#define __pp_op_10_13__()
#define __pp_op_10_14__()
#define __pp_op_10_15__()
#define __pp_op_10_16__()
#define __pp_op_10_17__()
#define __pp_op_10_18__()
#define __pp_op_10_19__()

#else

#if (__pp_expr__()) % 10 == 0
#if (__pp_expr__()) >= 10
#define __pp_op_10_0__() 0
#else
#define __pp_op_10_0__()
#endif
#elif (__pp_expr__()) % 10 == 1
#define __pp_op_10_0__() 1
#elif (__pp_expr__()) % 10 == 2
#define __pp_op_10_0__() 2
#elif (__pp_expr__()) % 10 == 3
#define __pp_op_10_0__() 3
#elif (__pp_expr__()) % 10 == 4
#define __pp_op_10_0__() 4
#elif (__pp_expr__()) % 10 == 5
#define __pp_op_10_0__() 5
#elif (__pp_expr__()) % 10 == 6
#define __pp_op_10_0__() 6
#elif (__pp_expr__()) % 10 == 7
#define __pp_op_10_0__() 7
#elif (__pp_expr__()) % 10 == 8
#define __pp_op_10_0__() 8
#elif (__pp_expr__()) % 10 == 9
#define __pp_op_10_0__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 0 in op 10 failed. expr '__pp_expr__' not defined"

#endif
