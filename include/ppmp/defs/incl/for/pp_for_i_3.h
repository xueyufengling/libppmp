#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_3_0__() 0
#define __pp_for_i_3_1__()
#define __pp_for_i_3_2__()
#define __pp_for_i_3_3__()
#define __pp_for_i_3_4__()
#define __pp_for_i_3_5__()
#define __pp_for_i_3_6__()
#define __pp_for_i_3_7__()
#define __pp_for_i_3_8__()
#define __pp_for_i_3_9__()
#define __pp_for_i_3_10__()
#define __pp_for_i_3_11__()
#define __pp_for_i_3_12__()
#define __pp_for_i_3_13__()
#define __pp_for_i_3_14__()
#define __pp_for_i_3_15__()
#define __pp_for_i_3_16__()
#define __pp_for_i_3_17__()
#define __pp_for_i_3_18__()
#define __pp_for_i_3_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(3, 0)
#include __store_pp_for_i_digit__(3, 1)
#include __store_pp_for_i_digit__(3, 2)
#include __store_pp_for_i_digit__(3, 3)
#include __store_pp_for_i_digit__(3, 4)
#include __store_pp_for_i_digit__(3, 5)
#include __store_pp_for_i_digit__(3, 6)
#include __store_pp_for_i_digit__(3, 7)
#include __store_pp_for_i_digit__(3, 8)
#include __store_pp_for_i_digit__(3, 9)
#include __store_pp_for_i_digit__(3, 10)
#include __store_pp_for_i_digit__(3, 11)
#include __store_pp_for_i_digit__(3, 12)
#include __store_pp_for_i_digit__(3, 13)
#include __store_pp_for_i_digit__(3, 14)
#include __store_pp_for_i_digit__(3, 15)
#include __store_pp_for_i_digit__(3, 16)
#include __store_pp_for_i_digit__(3, 17)
#include __store_pp_for_i_digit__(3, 18)

#endif

#undef __pp_for_i_3__
#define __pp_for_i_3__() __cat__(19, __pp_for_i_3_18__(), __pp_for_i_3_17__(), __pp_for_i_3_16__(), __pp_for_i_3_15__(), __pp_for_i_3_14__(), __pp_for_i_3_13__(), __pp_for_i_3_12__(), __pp_for_i_3_11__(), __pp_for_i_3_10__(), __pp_for_i_3_9__(), __pp_for_i_3_8__(), __pp_for_i_3_7__(), __pp_for_i_3_6__(), __pp_for_i_3_5__(), __pp_for_i_3_4__(), __pp_for_i_3_3__(), __pp_for_i_3_2__(), __pp_for_i_3_1__(), __pp_for_i_3_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 3 failed. expr '__pp_expr_for_i__()' not defined"

#endif
