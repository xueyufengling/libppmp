#if defined(__pp_op_16__) && defined(__pp_op_0__)

#undef __pp_op_lt_16_0__
#undef __pp_op_eq_16_0__
#undef __pp_op_gt_16_0__
#undef __pp_op_lt_0_16__
#undef __pp_op_eq_0_16__
#undef __pp_op_gt_0_16__

#if (__pp_op_16__()) < (__pp_op_0__())
#define __pp_op_lt_16_0__() 1
#define __pp_op_eq_16_0__() 0
#define __pp_op_gt_16_0__() 0
#define __pp_op_lt_0_16__() 0
#define __pp_op_eq_0_16__() 0
#define __pp_op_gt_0_16__() 1
#elif (__pp_op_16__()) == (__pp_op_0__())
#define __pp_op_lt_16_0__() 0
#define __pp_op_eq_16_0__() 1
#define __pp_op_gt_16_0__() 0
#define __pp_op_lt_0_16__() 0
#define __pp_op_eq_0_16__() 1
#define __pp_op_gt_0_16__() 0
#elif (__pp_op_16__()) > (__pp_op_0__())
#define __pp_op_lt_16_0__() 0
#define __pp_op_eq_16_0__() 0
#define __pp_op_gt_16_0__() 1
#define __pp_op_lt_0_16__() 1
#define __pp_op_eq_0_16__() 0
#define __pp_op_gt_0_16__() 0
#endif

#else

#error "cmp op 16 and op 0 failed. '__pp_op_16__' or '__pp_op_0__' not defined"

#endif
