#if defined(__pp_expr__)

#undef __pp_op_9_4__

#if (__pp_expr__()) == 0

#define __pp_op_9_0__() 0
#define __pp_op_9_1__()
#define __pp_op_9_2__()
#define __pp_op_9_3__()
#define __pp_op_9_4__()
#define __pp_op_9_5__()
#define __pp_op_9_6__()
#define __pp_op_9_7__()
#define __pp_op_9_8__()
#define __pp_op_9_9__()
#define __pp_op_9_10__()
#define __pp_op_9_11__()
#define __pp_op_9_12__()
#define __pp_op_9_13__()
#define __pp_op_9_14__()
#define __pp_op_9_15__()
#define __pp_op_9_16__()
#define __pp_op_9_17__()
#define __pp_op_9_18__()
#define __pp_op_9_19__()

#else

#if ((__pp_expr__()) / 10000) % 10 == 0
#if ((__pp_expr__()) / 10000) >= 10
#define __pp_op_9_4__() 0
#else
#define __pp_op_9_4__()
#endif
#elif ((__pp_expr__()) / 10000) % 10 == 1
#define __pp_op_9_4__() 1
#elif ((__pp_expr__()) / 10000) % 10 == 2
#define __pp_op_9_4__() 2
#elif ((__pp_expr__()) / 10000) % 10 == 3
#define __pp_op_9_4__() 3
#elif ((__pp_expr__()) / 10000) % 10 == 4
#define __pp_op_9_4__() 4
#elif ((__pp_expr__()) / 10000) % 10 == 5
#define __pp_op_9_4__() 5
#elif ((__pp_expr__()) / 10000) % 10 == 6
#define __pp_op_9_4__() 6
#elif ((__pp_expr__()) / 10000) % 10 == 7
#define __pp_op_9_4__() 7
#elif ((__pp_expr__()) / 10000) % 10 == 8
#define __pp_op_9_4__() 8
#elif ((__pp_expr__()) / 10000) % 10 == 9
#define __pp_op_9_4__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 4 in op 9 failed. expr '__pp_expr__' not defined"

#endif
