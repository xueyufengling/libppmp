#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_9_0__() 0
#define __pp_for_i_9_1__()
#define __pp_for_i_9_2__()
#define __pp_for_i_9_3__()
#define __pp_for_i_9_4__()
#define __pp_for_i_9_5__()
#define __pp_for_i_9_6__()
#define __pp_for_i_9_7__()
#define __pp_for_i_9_8__()
#define __pp_for_i_9_9__()
#define __pp_for_i_9_10__()
#define __pp_for_i_9_11__()
#define __pp_for_i_9_12__()
#define __pp_for_i_9_13__()
#define __pp_for_i_9_14__()
#define __pp_for_i_9_15__()
#define __pp_for_i_9_16__()
#define __pp_for_i_9_17__()
#define __pp_for_i_9_18__()
#define __pp_for_i_9_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(9, 0)
#include __store_pp_for_i_digit__(9, 1)
#include __store_pp_for_i_digit__(9, 2)
#include __store_pp_for_i_digit__(9, 3)
#include __store_pp_for_i_digit__(9, 4)
#include __store_pp_for_i_digit__(9, 5)
#include __store_pp_for_i_digit__(9, 6)
#include __store_pp_for_i_digit__(9, 7)
#include __store_pp_for_i_digit__(9, 8)
#include __store_pp_for_i_digit__(9, 9)
#include __store_pp_for_i_digit__(9, 10)
#include __store_pp_for_i_digit__(9, 11)
#include __store_pp_for_i_digit__(9, 12)
#include __store_pp_for_i_digit__(9, 13)
#include __store_pp_for_i_digit__(9, 14)
#include __store_pp_for_i_digit__(9, 15)
#include __store_pp_for_i_digit__(9, 16)
#include __store_pp_for_i_digit__(9, 17)
#include __store_pp_for_i_digit__(9, 18)

#endif

#undef __pp_for_i_9__
#define __pp_for_i_9__() __cat__(19, __pp_for_i_9_18__(), __pp_for_i_9_17__(), __pp_for_i_9_16__(), __pp_for_i_9_15__(), __pp_for_i_9_14__(), __pp_for_i_9_13__(), __pp_for_i_9_12__(), __pp_for_i_9_11__(), __pp_for_i_9_10__(), __pp_for_i_9_9__(), __pp_for_i_9_8__(), __pp_for_i_9_7__(), __pp_for_i_9_6__(), __pp_for_i_9_5__(), __pp_for_i_9_4__(), __pp_for_i_9_3__(), __pp_for_i_9_2__(), __pp_for_i_9_1__(), __pp_for_i_9_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 9 failed. expr '__pp_expr_for_i__()' not defined"

#endif
