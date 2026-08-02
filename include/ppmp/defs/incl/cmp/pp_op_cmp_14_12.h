#if defined(__pp_op_14__) && defined(__pp_op_12__)

#undef __pp_op_lt_14_12__
#undef __pp_op_eq_14_12__
#undef __pp_op_gt_14_12__
#undef __pp_op_lt_12_14__
#undef __pp_op_eq_12_14__
#undef __pp_op_gt_12_14__

#if (__pp_op_14__()) < (__pp_op_12__())
#define __pp_op_lt_14_12__() 1
#define __pp_op_eq_14_12__() 0
#define __pp_op_gt_14_12__() 0
#define __pp_op_lt_12_14__() 0
#define __pp_op_eq_12_14__() 0
#define __pp_op_gt_12_14__() 1
#elif (__pp_op_14__()) == (__pp_op_12__())
#define __pp_op_lt_14_12__() 0
#define __pp_op_eq_14_12__() 1
#define __pp_op_gt_14_12__() 0
#define __pp_op_lt_12_14__() 0
#define __pp_op_eq_12_14__() 1
#define __pp_op_gt_12_14__() 0
#elif (__pp_op_14__()) > (__pp_op_12__())
#define __pp_op_lt_14_12__() 0
#define __pp_op_eq_14_12__() 0
#define __pp_op_gt_14_12__() 1
#define __pp_op_lt_12_14__() 1
#define __pp_op_eq_12_14__() 0
#define __pp_op_gt_12_14__() 0
#endif

#else

#error "cmp op 14 and op 12 failed. '__pp_op_14__' or '__pp_op_12__' not defined"

#endif
