#if defined(__pp_expr_for_i__)

#if (__pp_expr_for_i__()) == 0

#define __pp_for_i_11_0__() 0
#define __pp_for_i_11_1__()
#define __pp_for_i_11_2__()
#define __pp_for_i_11_3__()
#define __pp_for_i_11_4__()
#define __pp_for_i_11_5__()
#define __pp_for_i_11_6__()
#define __pp_for_i_11_7__()
#define __pp_for_i_11_8__()
#define __pp_for_i_11_9__()
#define __pp_for_i_11_10__()
#define __pp_for_i_11_11__()
#define __pp_for_i_11_12__()
#define __pp_for_i_11_13__()
#define __pp_for_i_11_14__()
#define __pp_for_i_11_15__()
#define __pp_for_i_11_16__()
#define __pp_for_i_11_17__()
#define __pp_for_i_11_18__()
#define __pp_for_i_11_19__()

#else

#include <ppmp/defs/incl/for/store_pp_for_i.h>

#include __store_pp_for_i_digit__(11, 0)
#include __store_pp_for_i_digit__(11, 1)
#include __store_pp_for_i_digit__(11, 2)
#include __store_pp_for_i_digit__(11, 3)
#include __store_pp_for_i_digit__(11, 4)
#include __store_pp_for_i_digit__(11, 5)
#include __store_pp_for_i_digit__(11, 6)
#include __store_pp_for_i_digit__(11, 7)
#include __store_pp_for_i_digit__(11, 8)
#include __store_pp_for_i_digit__(11, 9)
#include __store_pp_for_i_digit__(11, 10)
#include __store_pp_for_i_digit__(11, 11)
#include __store_pp_for_i_digit__(11, 12)
#include __store_pp_for_i_digit__(11, 13)
#include __store_pp_for_i_digit__(11, 14)
#include __store_pp_for_i_digit__(11, 15)
#include __store_pp_for_i_digit__(11, 16)
#include __store_pp_for_i_digit__(11, 17)
#include __store_pp_for_i_digit__(11, 18)

#endif

#undef __pp_for_i_11__
#define __pp_for_i_11__() __cat__(19, __pp_for_i_11_18__(), __pp_for_i_11_17__(), __pp_for_i_11_16__(), __pp_for_i_11_15__(), __pp_for_i_11_14__(), __pp_for_i_11_13__(), __pp_for_i_11_12__(), __pp_for_i_11_11__(), __pp_for_i_11_10__(), __pp_for_i_11_9__(), __pp_for_i_11_8__(), __pp_for_i_11_7__(), __pp_for_i_11_6__(), __pp_for_i_11_5__(), __pp_for_i_11_4__(), __pp_for_i_11_3__(), __pp_for_i_11_2__(), __pp_for_i_11_1__(), __pp_for_i_11_0__())

#undef __pp_expr_for_i__

#else

#error "store 'pp_for_i' 11 failed. expr '__pp_expr_for_i__()' not defined"

#endif
