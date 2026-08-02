#if defined(__pp_op_6__) && defined(__pp_op_16__)

#undef __pp_op_lt_6_16__
#undef __pp_op_eq_6_16__
#undef __pp_op_gt_6_16__
#undef __pp_op_lt_16_6__
#undef __pp_op_eq_16_6__
#undef __pp_op_gt_16_6__

#if (__pp_op_6__()) < (__pp_op_16__())
#define __pp_op_lt_6_16__() 1
#define __pp_op_eq_6_16__() 0
#define __pp_op_gt_6_16__() 0
#define __pp_op_lt_16_6__() 0
#define __pp_op_eq_16_6__() 0
#define __pp_op_gt_16_6__() 1
#elif (__pp_op_6__()) == (__pp_op_16__())
#define __pp_op_lt_6_16__() 0
#define __pp_op_eq_6_16__() 1
#define __pp_op_gt_6_16__() 0
#define __pp_op_lt_16_6__() 0
#define __pp_op_eq_16_6__() 1
#define __pp_op_gt_16_6__() 0
#elif (__pp_op_6__()) > (__pp_op_16__())
#define __pp_op_lt_6_16__() 0
#define __pp_op_eq_6_16__() 0
#define __pp_op_gt_6_16__() 1
#define __pp_op_lt_16_6__() 1
#define __pp_op_eq_16_6__() 0
#define __pp_op_gt_16_6__() 0
#endif

#else

#error "cmp op 6 and op 16 failed. '__pp_op_6__' or '__pp_op_16__' not defined"

#endif
