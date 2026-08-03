#if defined(__pp_op_6__) && defined(__pp_op_0__)

#undef __pp_op_lt_6_0__
#undef __pp_op_eq_6_0__
#undef __pp_op_gt_6_0__
#undef __pp_op_lt_0_6__
#undef __pp_op_eq_0_6__
#undef __pp_op_gt_0_6__

#if (__pp_op_6__()) < (__pp_op_0__())
#define __pp_op_lt_6_0__() 1
#define __pp_op_eq_6_0__() 0
#define __pp_op_gt_6_0__() 0
#define __pp_op_lt_0_6__() 0
#define __pp_op_eq_0_6__() 0
#define __pp_op_gt_0_6__() 1
#elif (__pp_op_6__()) == (__pp_op_0__())
#define __pp_op_lt_6_0__() 0
#define __pp_op_eq_6_0__() 1
#define __pp_op_gt_6_0__() 0
#define __pp_op_lt_0_6__() 0
#define __pp_op_eq_0_6__() 1
#define __pp_op_gt_0_6__() 0
#elif (__pp_op_6__()) > (__pp_op_0__())
#define __pp_op_lt_6_0__() 0
#define __pp_op_eq_6_0__() 0
#define __pp_op_gt_6_0__() 1
#define __pp_op_lt_0_6__() 1
#define __pp_op_eq_0_6__() 0
#define __pp_op_gt_0_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 0 failed. '__pp_op_6__()' or '__pp_op_0__()' not defined"

#endif
