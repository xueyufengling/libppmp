#if defined(__pp_op_12__) && defined(__pp_op_0__)

#undef __pp_op_lt_12_0__
#undef __pp_op_eq_12_0__
#undef __pp_op_gt_12_0__
#undef __pp_op_lt_0_12__
#undef __pp_op_eq_0_12__
#undef __pp_op_gt_0_12__

#if (__pp_op_12__()) < (__pp_op_0__())
#define __pp_op_lt_12_0__() 1
#define __pp_op_eq_12_0__() 0
#define __pp_op_gt_12_0__() 0
#define __pp_op_lt_0_12__() 0
#define __pp_op_eq_0_12__() 0
#define __pp_op_gt_0_12__() 1
#elif (__pp_op_12__()) == (__pp_op_0__())
#define __pp_op_lt_12_0__() 0
#define __pp_op_eq_12_0__() 1
#define __pp_op_gt_12_0__() 0
#define __pp_op_lt_0_12__() 0
#define __pp_op_eq_0_12__() 1
#define __pp_op_gt_0_12__() 0
#elif (__pp_op_12__()) > (__pp_op_0__())
#define __pp_op_lt_12_0__() 0
#define __pp_op_eq_12_0__() 0
#define __pp_op_gt_12_0__() 1
#define __pp_op_lt_0_12__() 1
#define __pp_op_eq_0_12__() 0
#define __pp_op_gt_0_12__() 0
#endif

#else

#error "cmp op 12 and op 0 failed. '__pp_op_12__' or '__pp_op_0__' not defined"

#endif
