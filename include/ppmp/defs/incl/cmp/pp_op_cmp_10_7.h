#if defined(__pp_op_10__) && defined(__pp_op_7__)

#undef __pp_op_lt_10_7__
#undef __pp_op_eq_10_7__
#undef __pp_op_gt_10_7__
#undef __pp_op_lt_7_10__
#undef __pp_op_eq_7_10__
#undef __pp_op_gt_7_10__

#if (__pp_op_10__()) < (__pp_op_7__())
#define __pp_op_lt_10_7__() 1
#define __pp_op_eq_10_7__() 0
#define __pp_op_gt_10_7__() 0
#define __pp_op_lt_7_10__() 0
#define __pp_op_eq_7_10__() 0
#define __pp_op_gt_7_10__() 1
#elif (__pp_op_10__()) == (__pp_op_7__())
#define __pp_op_lt_10_7__() 0
#define __pp_op_eq_10_7__() 1
#define __pp_op_gt_10_7__() 0
#define __pp_op_lt_7_10__() 0
#define __pp_op_eq_7_10__() 1
#define __pp_op_gt_7_10__() 0
#elif (__pp_op_10__()) > (__pp_op_7__())
#define __pp_op_lt_10_7__() 0
#define __pp_op_eq_10_7__() 0
#define __pp_op_gt_10_7__() 1
#define __pp_op_lt_7_10__() 1
#define __pp_op_eq_7_10__() 0
#define __pp_op_gt_7_10__() 0
#endif

#else

#error "cmp 'pp_op' 10 and 7 failed. '__pp_op_10__()' or '__pp_op_7__()' not defined"

#endif
