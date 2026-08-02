#if defined(__pp_op_5__) && defined(__pp_op_12__)

#undef __pp_op_lt_5_12__
#undef __pp_op_eq_5_12__
#undef __pp_op_gt_5_12__
#undef __pp_op_lt_12_5__
#undef __pp_op_eq_12_5__
#undef __pp_op_gt_12_5__

#if (__pp_op_5__()) < (__pp_op_12__())
#define __pp_op_lt_5_12__() 1
#define __pp_op_eq_5_12__() 0
#define __pp_op_gt_5_12__() 0
#define __pp_op_lt_12_5__() 0
#define __pp_op_eq_12_5__() 0
#define __pp_op_gt_12_5__() 1
#elif (__pp_op_5__()) == (__pp_op_12__())
#define __pp_op_lt_5_12__() 0
#define __pp_op_eq_5_12__() 1
#define __pp_op_gt_5_12__() 0
#define __pp_op_lt_12_5__() 0
#define __pp_op_eq_12_5__() 1
#define __pp_op_gt_12_5__() 0
#elif (__pp_op_5__()) > (__pp_op_12__())
#define __pp_op_lt_5_12__() 0
#define __pp_op_eq_5_12__() 0
#define __pp_op_gt_5_12__() 1
#define __pp_op_lt_12_5__() 1
#define __pp_op_eq_12_5__() 0
#define __pp_op_gt_12_5__() 0
#endif

#else

#error "cmp op 5 and op 12 failed. '__pp_op_5__' or '__pp_op_12__' not defined"

#endif
