#if defined(__pp_op_10__) && defined(__pp_op_12__)

#undef __pp_op_lt_10_12__
#undef __pp_op_eq_10_12__
#undef __pp_op_gt_10_12__
#undef __pp_op_lt_12_10__
#undef __pp_op_eq_12_10__
#undef __pp_op_gt_12_10__

#if (__pp_op_10__()) < (__pp_op_12__())
#define __pp_op_lt_10_12__() 1
#define __pp_op_eq_10_12__() 0
#define __pp_op_gt_10_12__() 0
#define __pp_op_lt_12_10__() 0
#define __pp_op_eq_12_10__() 0
#define __pp_op_gt_12_10__() 1
#elif (__pp_op_10__()) == (__pp_op_12__())
#define __pp_op_lt_10_12__() 0
#define __pp_op_eq_10_12__() 1
#define __pp_op_gt_10_12__() 0
#define __pp_op_lt_12_10__() 0
#define __pp_op_eq_12_10__() 1
#define __pp_op_gt_12_10__() 0
#elif (__pp_op_10__()) > (__pp_op_12__())
#define __pp_op_lt_10_12__() 0
#define __pp_op_eq_10_12__() 0
#define __pp_op_gt_10_12__() 1
#define __pp_op_lt_12_10__() 1
#define __pp_op_eq_12_10__() 0
#define __pp_op_gt_12_10__() 0
#endif

#else

#error "cmp op 10 and op 12 failed. '__pp_op_10__' or '__pp_op_12__' not defined"

#endif
