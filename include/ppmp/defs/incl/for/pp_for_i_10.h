#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_10_0__() 0
#define __pp_for_i_10_1__()
#define __pp_for_i_10_2__()
#define __pp_for_i_10_3__()
#define __pp_for_i_10_4__()
#define __pp_for_i_10_5__()
#define __pp_for_i_10_6__()
#define __pp_for_i_10_7__()
#define __pp_for_i_10_8__()
#define __pp_for_i_10_9__()
#define __pp_for_i_10_10__()
#define __pp_for_i_10_11__()
#define __pp_for_i_10_12__()
#define __pp_for_i_10_13__()
#define __pp_for_i_10_14__()
#define __pp_for_i_10_15__()
#define __pp_for_i_10_16__()
#define __pp_for_i_10_17__()
#define __pp_for_i_10_18__()
#define __pp_for_i_10_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(10, 0)
#include __store_pp_for_i_digit__(10, 1)
#include __store_pp_for_i_digit__(10, 2)
#include __store_pp_for_i_digit__(10, 3)
#include __store_pp_for_i_digit__(10, 4)
#include __store_pp_for_i_digit__(10, 5)
#include __store_pp_for_i_digit__(10, 6)
#include __store_pp_for_i_digit__(10, 7)
#include __store_pp_for_i_digit__(10, 8)
#include __store_pp_for_i_digit__(10, 9)
#include __store_pp_for_i_digit__(10, 10)
#include __store_pp_for_i_digit__(10, 11)
#include __store_pp_for_i_digit__(10, 12)
#include __store_pp_for_i_digit__(10, 13)
#include __store_pp_for_i_digit__(10, 14)
#include __store_pp_for_i_digit__(10, 15)
#include __store_pp_for_i_digit__(10, 16)
#include __store_pp_for_i_digit__(10, 17)
#include __store_pp_for_i_digit__(10, 18)

#endif

#undef __pp_for_i_10__
#define __pp_for_i_10__() __cat__(19, __pp_for_i_10_18__(), __pp_for_i_10_17__(), __pp_for_i_10_16__(), __pp_for_i_10_15__(), __pp_for_i_10_14__(), __pp_for_i_10_13__(), __pp_for_i_10_12__(), __pp_for_i_10_11__(), __pp_for_i_10_10__(), __pp_for_i_10_9__(), __pp_for_i_10_8__(), __pp_for_i_10_7__(), __pp_for_i_10_6__(), __pp_for_i_10_5__(), __pp_for_i_10_4__(), __pp_for_i_10_3__(), __pp_for_i_10_2__(), __pp_for_i_10_1__(), __pp_for_i_10_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 10 failed. expr '__pp_expr_for_i__()' not defined"

#endif
