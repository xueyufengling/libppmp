#if defined(__pp_op_2__) && defined(__pp_op_12__)

#undef __pp_op_lt_2_12__
#undef __pp_op_eq_2_12__
#undef __pp_op_gt_2_12__
#undef __pp_op_lt_12_2__
#undef __pp_op_eq_12_2__
#undef __pp_op_gt_12_2__

#if (__pp_op_2__()) < (__pp_op_12__())
#define __pp_op_lt_2_12__() 1
#define __pp_op_eq_2_12__() 0
#define __pp_op_gt_2_12__() 0
#define __pp_op_lt_12_2__() 0
#define __pp_op_eq_12_2__() 0
#define __pp_op_gt_12_2__() 1
#elif (__pp_op_2__()) == (__pp_op_12__())
#define __pp_op_lt_2_12__() 0
#define __pp_op_eq_2_12__() 1
#define __pp_op_gt_2_12__() 0
#define __pp_op_lt_12_2__() 0
#define __pp_op_eq_12_2__() 1
#define __pp_op_gt_12_2__() 0
#elif (__pp_op_2__()) > (__pp_op_12__())
#define __pp_op_lt_2_12__() 0
#define __pp_op_eq_2_12__() 0
#define __pp_op_gt_2_12__() 1
#define __pp_op_lt_12_2__() 1
#define __pp_op_eq_12_2__() 0
#define __pp_op_gt_12_2__() 0
#endif

#else

#error "cmp op 2 and op 12 failed. '__pp_op_2__' or '__pp_op_12__' not defined"

#endif
