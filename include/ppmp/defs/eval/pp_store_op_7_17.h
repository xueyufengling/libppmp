#if defined(__pp_expr__)

#undef __pp_op_7_17__

#if (__pp_expr__()) == 0

#define __pp_op_7_0__() 0
#define __pp_op_7_1__()
#define __pp_op_7_2__()
#define __pp_op_7_3__()
#define __pp_op_7_4__()
#define __pp_op_7_5__()
#define __pp_op_7_6__()
#define __pp_op_7_7__()
#define __pp_op_7_8__()
#define __pp_op_7_9__()
#define __pp_op_7_10__()
#define __pp_op_7_11__()
#define __pp_op_7_12__()
#define __pp_op_7_13__()
#define __pp_op_7_14__()
#define __pp_op_7_15__()
#define __pp_op_7_16__()
#define __pp_op_7_17__()
#define __pp_op_7_18__()
#define __pp_op_7_19__()

#else

#if ((__pp_expr__()) / 100000000000000000) % 10 == 0
#if ((__pp_expr__()) / 100000000000000000) >= 10
#define __pp_op_7_17__() 0
#else
#define __pp_op_7_17__()
#endif
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 1
#define __pp_op_7_17__() 1
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 2
#define __pp_op_7_17__() 2
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 3
#define __pp_op_7_17__() 3
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 4
#define __pp_op_7_17__() 4
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 5
#define __pp_op_7_17__() 5
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 6
#define __pp_op_7_17__() 6
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 7
#define __pp_op_7_17__() 7
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 8
#define __pp_op_7_17__() 8
#elif ((__pp_expr__()) / 100000000000000000) % 10 == 9
#define __pp_op_7_17__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 17 in op 7 failed. expr '__pp_expr__' not defined"

#endif
