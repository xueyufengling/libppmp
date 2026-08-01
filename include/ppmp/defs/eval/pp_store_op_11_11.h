#if defined(__pp_expr__)

#undef __pp_op_11_11__

#if (__pp_expr__()) == 0

#define __pp_op_11_0__() 0
#define __pp_op_11_1__()
#define __pp_op_11_2__()
#define __pp_op_11_3__()
#define __pp_op_11_4__()
#define __pp_op_11_5__()
#define __pp_op_11_6__()
#define __pp_op_11_7__()
#define __pp_op_11_8__()
#define __pp_op_11_9__()
#define __pp_op_11_10__()
#define __pp_op_11_11__()
#define __pp_op_11_12__()
#define __pp_op_11_13__()
#define __pp_op_11_14__()
#define __pp_op_11_15__()
#define __pp_op_11_16__()
#define __pp_op_11_17__()
#define __pp_op_11_18__()
#define __pp_op_11_19__()

#else

#if ((__pp_expr__()) / 100000000000) % 10 == 0
#if ((__pp_expr__()) / 100000000000) >= 10
#define __pp_op_11_11__() 0
#else
#define __pp_op_11_11__()
#endif
#elif ((__pp_expr__()) / 100000000000) % 10 == 1
#define __pp_op_11_11__() 1
#elif ((__pp_expr__()) / 100000000000) % 10 == 2
#define __pp_op_11_11__() 2
#elif ((__pp_expr__()) / 100000000000) % 10 == 3
#define __pp_op_11_11__() 3
#elif ((__pp_expr__()) / 100000000000) % 10 == 4
#define __pp_op_11_11__() 4
#elif ((__pp_expr__()) / 100000000000) % 10 == 5
#define __pp_op_11_11__() 5
#elif ((__pp_expr__()) / 100000000000) % 10 == 6
#define __pp_op_11_11__() 6
#elif ((__pp_expr__()) / 100000000000) % 10 == 7
#define __pp_op_11_11__() 7
#elif ((__pp_expr__()) / 100000000000) % 10 == 8
#define __pp_op_11_11__() 8
#elif ((__pp_expr__()) / 100000000000) % 10 == 9
#define __pp_op_11_11__() 9
#endif

#endif

#include "../../eval/intl/expr_auto_undef.h"

#else

#error "store digit 11 in op 11 failed. expr '__pp_expr__' not defined"

#endif
