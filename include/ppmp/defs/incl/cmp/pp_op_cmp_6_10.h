#if defined(__pp_op_6__) && defined(__pp_op_10__)

#undef __pp_op_lt_6_10__
#undef __pp_op_eq_6_10__
#undef __pp_op_gt_6_10__
#undef __pp_op_lt_10_6__
#undef __pp_op_eq_10_6__
#undef __pp_op_gt_10_6__

#if (__pp_op_6__()) < (__pp_op_10__())
#define __pp_op_lt_6_10__() 1
#define __pp_op_eq_6_10__() 0
#define __pp_op_gt_6_10__() 0
#define __pp_op_lt_10_6__() 0
#define __pp_op_eq_10_6__() 0
#define __pp_op_gt_10_6__() 1
#elif (__pp_op_6__()) == (__pp_op_10__())
#define __pp_op_lt_6_10__() 0
#define __pp_op_eq_6_10__() 1
#define __pp_op_gt_6_10__() 0
#define __pp_op_lt_10_6__() 0
#define __pp_op_eq_10_6__() 1
#define __pp_op_gt_10_6__() 0
#elif (__pp_op_6__()) > (__pp_op_10__())
#define __pp_op_lt_6_10__() 0
#define __pp_op_eq_6_10__() 0
#define __pp_op_gt_6_10__() 1
#define __pp_op_lt_10_6__() 1
#define __pp_op_eq_10_6__() 0
#define __pp_op_gt_10_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 10 failed. '__pp_op_6__()' or '__pp_op_10__()' not defined"

#endif
