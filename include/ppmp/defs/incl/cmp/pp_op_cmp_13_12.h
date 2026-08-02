#if defined(__pp_op_13__) && defined(__pp_op_12__)

#undef __pp_op_lt_13_12__
#undef __pp_op_eq_13_12__
#undef __pp_op_gt_13_12__
#undef __pp_op_lt_12_13__
#undef __pp_op_eq_12_13__
#undef __pp_op_gt_12_13__

#if (__pp_op_13__()) < (__pp_op_12__())
#define __pp_op_lt_13_12__() 1
#define __pp_op_eq_13_12__() 0
#define __pp_op_gt_13_12__() 0
#define __pp_op_lt_12_13__() 0
#define __pp_op_eq_12_13__() 0
#define __pp_op_gt_12_13__() 1
#elif (__pp_op_13__()) == (__pp_op_12__())
#define __pp_op_lt_13_12__() 0
#define __pp_op_eq_13_12__() 1
#define __pp_op_gt_13_12__() 0
#define __pp_op_lt_12_13__() 0
#define __pp_op_eq_12_13__() 1
#define __pp_op_gt_12_13__() 0
#elif (__pp_op_13__()) > (__pp_op_12__())
#define __pp_op_lt_13_12__() 0
#define __pp_op_eq_13_12__() 0
#define __pp_op_gt_13_12__() 1
#define __pp_op_lt_12_13__() 1
#define __pp_op_eq_12_13__() 0
#define __pp_op_gt_12_13__() 0
#endif

#else

#error "cmp op 13 and op 12 failed. '__pp_op_13__' or '__pp_op_12__' not defined"

#endif
