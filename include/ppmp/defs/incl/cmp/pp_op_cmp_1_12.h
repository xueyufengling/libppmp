#if defined(__pp_op_1__) && defined(__pp_op_12__)

#undef __pp_op_lt_1_12__
#undef __pp_op_eq_1_12__
#undef __pp_op_gt_1_12__
#undef __pp_op_lt_12_1__
#undef __pp_op_eq_12_1__
#undef __pp_op_gt_12_1__

#if (__pp_op_1__()) < (__pp_op_12__())
#define __pp_op_lt_1_12__() 1
#define __pp_op_eq_1_12__() 0
#define __pp_op_gt_1_12__() 0
#define __pp_op_lt_12_1__() 0
#define __pp_op_eq_12_1__() 0
#define __pp_op_gt_12_1__() 1
#elif (__pp_op_1__()) == (__pp_op_12__())
#define __pp_op_lt_1_12__() 0
#define __pp_op_eq_1_12__() 1
#define __pp_op_gt_1_12__() 0
#define __pp_op_lt_12_1__() 0
#define __pp_op_eq_12_1__() 1
#define __pp_op_gt_12_1__() 0
#elif (__pp_op_1__()) > (__pp_op_12__())
#define __pp_op_lt_1_12__() 0
#define __pp_op_eq_1_12__() 0
#define __pp_op_gt_1_12__() 1
#define __pp_op_lt_12_1__() 1
#define __pp_op_eq_12_1__() 0
#define __pp_op_gt_12_1__() 0
#endif

#else

#error "cmp op 1 and op 12 failed. '__pp_op_1__' or '__pp_op_12__' not defined"

#endif
