#if defined(__pp_op_8__) && defined(__pp_op_0__)

#undef __pp_op_lt_8_0__
#undef __pp_op_eq_8_0__
#undef __pp_op_gt_8_0__
#undef __pp_op_lt_0_8__
#undef __pp_op_eq_0_8__
#undef __pp_op_gt_0_8__

#if (__pp_op_8__()) < (__pp_op_0__())
#define __pp_op_lt_8_0__() 1
#define __pp_op_eq_8_0__() 0
#define __pp_op_gt_8_0__() 0
#define __pp_op_lt_0_8__() 0
#define __pp_op_eq_0_8__() 0
#define __pp_op_gt_0_8__() 1
#elif (__pp_op_8__()) == (__pp_op_0__())
#define __pp_op_lt_8_0__() 0
#define __pp_op_eq_8_0__() 1
#define __pp_op_gt_8_0__() 0
#define __pp_op_lt_0_8__() 0
#define __pp_op_eq_0_8__() 1
#define __pp_op_gt_0_8__() 0
#elif (__pp_op_8__()) > (__pp_op_0__())
#define __pp_op_lt_8_0__() 0
#define __pp_op_eq_8_0__() 0
#define __pp_op_gt_8_0__() 1
#define __pp_op_lt_0_8__() 1
#define __pp_op_eq_0_8__() 0
#define __pp_op_gt_0_8__() 0
#endif

#else

#error "cmp op 8 and op 0 failed. '__pp_op_8__' or '__pp_op_0__' not defined"

#endif
