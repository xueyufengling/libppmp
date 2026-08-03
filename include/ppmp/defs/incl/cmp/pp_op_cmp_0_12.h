#if defined(__pp_op_0__) && defined(__pp_op_12__)

#undef __pp_op_lt_0_12__
#undef __pp_op_eq_0_12__
#undef __pp_op_gt_0_12__
#undef __pp_op_lt_12_0__
#undef __pp_op_eq_12_0__
#undef __pp_op_gt_12_0__

#if (__pp_op_0__()) < (__pp_op_12__())
#define __pp_op_lt_0_12__() 1
#define __pp_op_eq_0_12__() 0
#define __pp_op_gt_0_12__() 0
#define __pp_op_lt_12_0__() 0
#define __pp_op_eq_12_0__() 0
#define __pp_op_gt_12_0__() 1
#elif (__pp_op_0__()) == (__pp_op_12__())
#define __pp_op_lt_0_12__() 0
#define __pp_op_eq_0_12__() 1
#define __pp_op_gt_0_12__() 0
#define __pp_op_lt_12_0__() 0
#define __pp_op_eq_12_0__() 1
#define __pp_op_gt_12_0__() 0
#elif (__pp_op_0__()) > (__pp_op_12__())
#define __pp_op_lt_0_12__() 0
#define __pp_op_eq_0_12__() 0
#define __pp_op_gt_0_12__() 1
#define __pp_op_lt_12_0__() 1
#define __pp_op_eq_12_0__() 0
#define __pp_op_gt_12_0__() 0
#endif

#else

#error "cmp 'pp_op' 0 and 12 failed. '__pp_op_0__()' or '__pp_op_12__()' not defined"

#endif
