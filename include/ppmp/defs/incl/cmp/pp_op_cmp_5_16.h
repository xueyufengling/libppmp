#if defined(__pp_op_5__) && defined(__pp_op_16__)

#undef __pp_op_lt_5_16__
#undef __pp_op_eq_5_16__
#undef __pp_op_gt_5_16__
#undef __pp_op_lt_16_5__
#undef __pp_op_eq_16_5__
#undef __pp_op_gt_16_5__

#if (__pp_op_5__()) < (__pp_op_16__())
#define __pp_op_lt_5_16__() 1
#define __pp_op_eq_5_16__() 0
#define __pp_op_gt_5_16__() 0
#define __pp_op_lt_16_5__() 0
#define __pp_op_eq_16_5__() 0
#define __pp_op_gt_16_5__() 1
#elif (__pp_op_5__()) == (__pp_op_16__())
#define __pp_op_lt_5_16__() 0
#define __pp_op_eq_5_16__() 1
#define __pp_op_gt_5_16__() 0
#define __pp_op_lt_16_5__() 0
#define __pp_op_eq_16_5__() 1
#define __pp_op_gt_16_5__() 0
#elif (__pp_op_5__()) > (__pp_op_16__())
#define __pp_op_lt_5_16__() 0
#define __pp_op_eq_5_16__() 0
#define __pp_op_gt_5_16__() 1
#define __pp_op_lt_16_5__() 1
#define __pp_op_eq_16_5__() 0
#define __pp_op_gt_16_5__() 0
#endif

#else

#error "cmp op 5 and op 16 failed. '__pp_op_5__' or '__pp_op_16__' not defined"

#endif
