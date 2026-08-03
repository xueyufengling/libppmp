#if defined(__pp_op_10__) && defined(__pp_op_6__)

#undef __pp_op_lt_10_6__
#undef __pp_op_eq_10_6__
#undef __pp_op_gt_10_6__
#undef __pp_op_lt_6_10__
#undef __pp_op_eq_6_10__
#undef __pp_op_gt_6_10__

#if (__pp_op_10__()) < (__pp_op_6__())
#define __pp_op_lt_10_6__() 1
#define __pp_op_eq_10_6__() 0
#define __pp_op_gt_10_6__() 0
#define __pp_op_lt_6_10__() 0
#define __pp_op_eq_6_10__() 0
#define __pp_op_gt_6_10__() 1
#elif (__pp_op_10__()) == (__pp_op_6__())
#define __pp_op_lt_10_6__() 0
#define __pp_op_eq_10_6__() 1
#define __pp_op_gt_10_6__() 0
#define __pp_op_lt_6_10__() 0
#define __pp_op_eq_6_10__() 1
#define __pp_op_gt_6_10__() 0
#elif (__pp_op_10__()) > (__pp_op_6__())
#define __pp_op_lt_10_6__() 0
#define __pp_op_eq_10_6__() 0
#define __pp_op_gt_10_6__() 1
#define __pp_op_lt_6_10__() 1
#define __pp_op_eq_6_10__() 0
#define __pp_op_gt_6_10__() 0
#endif

#else

#error "cmp 'pp_op' 10 and 6 failed. '__pp_op_10__()' or '__pp_op_6__()' not defined"

#endif
