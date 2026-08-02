#if defined(__pp_op_16__) && defined(__pp_op_12__)

#undef __pp_op_lt_16_12__
#undef __pp_op_eq_16_12__
#undef __pp_op_gt_16_12__
#undef __pp_op_lt_12_16__
#undef __pp_op_eq_12_16__
#undef __pp_op_gt_12_16__

#if (__pp_op_16__()) < (__pp_op_12__())
#define __pp_op_lt_16_12__() 1
#define __pp_op_eq_16_12__() 0
#define __pp_op_gt_16_12__() 0
#define __pp_op_lt_12_16__() 0
#define __pp_op_eq_12_16__() 0
#define __pp_op_gt_12_16__() 1
#elif (__pp_op_16__()) == (__pp_op_12__())
#define __pp_op_lt_16_12__() 0
#define __pp_op_eq_16_12__() 1
#define __pp_op_gt_16_12__() 0
#define __pp_op_lt_12_16__() 0
#define __pp_op_eq_12_16__() 1
#define __pp_op_gt_12_16__() 0
#elif (__pp_op_16__()) > (__pp_op_12__())
#define __pp_op_lt_16_12__() 0
#define __pp_op_eq_16_12__() 0
#define __pp_op_gt_16_12__() 1
#define __pp_op_lt_12_16__() 1
#define __pp_op_eq_12_16__() 0
#define __pp_op_gt_12_16__() 0
#endif

#else

#error "cmp op 16 and op 12 failed. '__pp_op_16__' or '__pp_op_12__' not defined"

#endif
