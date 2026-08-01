#if defined(__pp_expr__)

#undef __pp_op_2_1__

#if (__pp_expr__()) == 0

#define __pp_op_2_0__() 0
#define __pp_op_2_1__()
#define __pp_op_2_2__()
#define __pp_op_2_3__()
#define __pp_op_2_4__()
#define __pp_op_2_5__()
#define __pp_op_2_6__()
#define __pp_op_2_7__()
#define __pp_op_2_8__()
#define __pp_op_2_9__()
#define __pp_op_2_10__()
#define __pp_op_2_11__()
#define __pp_op_2_12__()
#define __pp_op_2_13__()
#define __pp_op_2_14__()
#define __pp_op_2_15__()
#define __pp_op_2_16__()
#define __pp_op_2_17__()
#define __pp_op_2_18__()
#define __pp_op_2_19__()

#else

#if ((__pp_expr__()) / 10) % 10 == 0
#if ((__pp_expr__()) / 10) >= 10
#define __pp_op_2_1__() 0
#else
#define __pp_op_2_1__()
#endif
#elif ((__pp_expr__()) / 10) % 10 == 1
#define __pp_op_2_1__() 1
#elif ((__pp_expr__()) / 10) % 10 == 2
#define __pp_op_2_1__() 2
#elif ((__pp_expr__()) / 10) % 10 == 3
#define __pp_op_2_1__() 3
#elif ((__pp_expr__()) / 10) % 10 == 4
#define __pp_op_2_1__() 4
#elif ((__pp_expr__()) / 10) % 10 == 5
#define __pp_op_2_1__() 5
#elif ((__pp_expr__()) / 10) % 10 == 6
#define __pp_op_2_1__() 6
#elif ((__pp_expr__()) / 10) % 10 == 7
#define __pp_op_2_1__() 7
#elif ((__pp_expr__()) / 10) % 10 == 8
#define __pp_op_2_1__() 8
#elif ((__pp_expr__()) / 10) % 10 == 9
#define __pp_op_2_1__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 1 in op 2 failed. expr '__pp_expr__' not defined"

#endif
