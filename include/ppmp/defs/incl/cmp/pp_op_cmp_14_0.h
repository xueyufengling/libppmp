#if defined(__pp_op_14__) && defined(__pp_op_0__)

#undef __pp_op_lt_14_0__
#undef __pp_op_eq_14_0__
#undef __pp_op_gt_14_0__
#undef __pp_op_lt_0_14__
#undef __pp_op_eq_0_14__
#undef __pp_op_gt_0_14__

#if (__pp_op_14__()) < (__pp_op_0__())
#define __pp_op_lt_14_0__() 1
#define __pp_op_eq_14_0__() 0
#define __pp_op_gt_14_0__() 0
#define __pp_op_lt_0_14__() 0
#define __pp_op_eq_0_14__() 0
#define __pp_op_gt_0_14__() 1
#elif (__pp_op_14__()) == (__pp_op_0__())
#define __pp_op_lt_14_0__() 0
#define __pp_op_eq_14_0__() 1
#define __pp_op_gt_14_0__() 0
#define __pp_op_lt_0_14__() 0
#define __pp_op_eq_0_14__() 1
#define __pp_op_gt_0_14__() 0
#elif (__pp_op_14__()) > (__pp_op_0__())
#define __pp_op_lt_14_0__() 0
#define __pp_op_eq_14_0__() 0
#define __pp_op_gt_14_0__() 1
#define __pp_op_lt_0_14__() 1
#define __pp_op_eq_0_14__() 0
#define __pp_op_gt_0_14__() 0
#endif

#else

#error "cmp op 14 and op 0 failed. '__pp_op_14__' or '__pp_op_0__' not defined"

#endif
