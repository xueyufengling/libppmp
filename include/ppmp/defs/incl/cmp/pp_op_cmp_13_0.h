#if defined(__pp_op_13__) && defined(__pp_op_0__)

#undef __pp_op_lt_13_0__
#undef __pp_op_eq_13_0__
#undef __pp_op_gt_13_0__
#undef __pp_op_lt_0_13__
#undef __pp_op_eq_0_13__
#undef __pp_op_gt_0_13__

#if (__pp_op_13__()) < (__pp_op_0__())
#define __pp_op_lt_13_0__() 1
#define __pp_op_eq_13_0__() 0
#define __pp_op_gt_13_0__() 0
#define __pp_op_lt_0_13__() 0
#define __pp_op_eq_0_13__() 0
#define __pp_op_gt_0_13__() 1
#elif (__pp_op_13__()) == (__pp_op_0__())
#define __pp_op_lt_13_0__() 0
#define __pp_op_eq_13_0__() 1
#define __pp_op_gt_13_0__() 0
#define __pp_op_lt_0_13__() 0
#define __pp_op_eq_0_13__() 1
#define __pp_op_gt_0_13__() 0
#elif (__pp_op_13__()) > (__pp_op_0__())
#define __pp_op_lt_13_0__() 0
#define __pp_op_eq_13_0__() 0
#define __pp_op_gt_13_0__() 1
#define __pp_op_lt_0_13__() 1
#define __pp_op_eq_0_13__() 0
#define __pp_op_gt_0_13__() 0
#endif

#else

#error "cmp 'pp_op' 13 and 0 failed. '__pp_op_13__()' or '__pp_op_0__()' not defined"

#endif
