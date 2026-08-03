#if defined(__pp_op_0__) && defined(__pp_op_13__)

#undef __pp_op_lt_0_13__
#undef __pp_op_eq_0_13__
#undef __pp_op_gt_0_13__
#undef __pp_op_lt_13_0__
#undef __pp_op_eq_13_0__
#undef __pp_op_gt_13_0__

#if (__pp_op_0__()) < (__pp_op_13__())
#define __pp_op_lt_0_13__() 1
#define __pp_op_eq_0_13__() 0
#define __pp_op_gt_0_13__() 0
#define __pp_op_lt_13_0__() 0
#define __pp_op_eq_13_0__() 0
#define __pp_op_gt_13_0__() 1
#elif (__pp_op_0__()) == (__pp_op_13__())
#define __pp_op_lt_0_13__() 0
#define __pp_op_eq_0_13__() 1
#define __pp_op_gt_0_13__() 0
#define __pp_op_lt_13_0__() 0
#define __pp_op_eq_13_0__() 1
#define __pp_op_gt_13_0__() 0
#elif (__pp_op_0__()) > (__pp_op_13__())
#define __pp_op_lt_0_13__() 0
#define __pp_op_eq_0_13__() 0
#define __pp_op_gt_0_13__() 1
#define __pp_op_lt_13_0__() 1
#define __pp_op_eq_13_0__() 0
#define __pp_op_gt_13_0__() 0
#endif

#else

#error "cmp 'pp_op' 0 and 13 failed. '__pp_op_0__()' or '__pp_op_13__()' not defined"

#endif
