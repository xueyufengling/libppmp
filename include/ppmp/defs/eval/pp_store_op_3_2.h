#if defined(__pp_expr__)

#undef __pp_op_3_2__

#if (__pp_expr__()) == 0

#define __pp_op_3_0__() 0
#define __pp_op_3_1__()
#define __pp_op_3_2__()
#define __pp_op_3_3__()
#define __pp_op_3_4__()
#define __pp_op_3_5__()
#define __pp_op_3_6__()
#define __pp_op_3_7__()
#define __pp_op_3_8__()
#define __pp_op_3_9__()
#define __pp_op_3_10__()
#define __pp_op_3_11__()
#define __pp_op_3_12__()
#define __pp_op_3_13__()
#define __pp_op_3_14__()
#define __pp_op_3_15__()
#define __pp_op_3_16__()
#define __pp_op_3_17__()
#define __pp_op_3_18__()
#define __pp_op_3_19__()

#else

#if ((__pp_expr__()) / 100) % 10 == 0
#if ((__pp_expr__()) / 100) >= 10
#define __pp_op_3_2__() 0
#else
#define __pp_op_3_2__()
#endif
#elif ((__pp_expr__()) / 100) % 10 == 1
#define __pp_op_3_2__() 1
#elif ((__pp_expr__()) / 100) % 10 == 2
#define __pp_op_3_2__() 2
#elif ((__pp_expr__()) / 100) % 10 == 3
#define __pp_op_3_2__() 3
#elif ((__pp_expr__()) / 100) % 10 == 4
#define __pp_op_3_2__() 4
#elif ((__pp_expr__()) / 100) % 10 == 5
#define __pp_op_3_2__() 5
#elif ((__pp_expr__()) / 100) % 10 == 6
#define __pp_op_3_2__() 6
#elif ((__pp_expr__()) / 100) % 10 == 7
#define __pp_op_3_2__() 7
#elif ((__pp_expr__()) / 100) % 10 == 8
#define __pp_op_3_2__() 8
#elif ((__pp_expr__()) / 100) % 10 == 9
#define __pp_op_3_2__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 2 in op 3 failed. expr '__pp_expr__' not defined"

#endif
