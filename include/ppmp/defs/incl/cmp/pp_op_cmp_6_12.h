#if defined(__pp_op_6__) && defined(__pp_op_12__)

#undef __pp_op_lt_6_12__
#undef __pp_op_eq_6_12__
#undef __pp_op_gt_6_12__
#undef __pp_op_lt_12_6__
#undef __pp_op_eq_12_6__
#undef __pp_op_gt_12_6__

#if (__pp_op_6__()) < (__pp_op_12__())
#define __pp_op_lt_6_12__() 1
#define __pp_op_eq_6_12__() 0
#define __pp_op_gt_6_12__() 0
#define __pp_op_lt_12_6__() 0
#define __pp_op_eq_12_6__() 0
#define __pp_op_gt_12_6__() 1
#elif (__pp_op_6__()) == (__pp_op_12__())
#define __pp_op_lt_6_12__() 0
#define __pp_op_eq_6_12__() 1
#define __pp_op_gt_6_12__() 0
#define __pp_op_lt_12_6__() 0
#define __pp_op_eq_12_6__() 1
#define __pp_op_gt_12_6__() 0
#elif (__pp_op_6__()) > (__pp_op_12__())
#define __pp_op_lt_6_12__() 0
#define __pp_op_eq_6_12__() 0
#define __pp_op_gt_6_12__() 1
#define __pp_op_lt_12_6__() 1
#define __pp_op_eq_12_6__() 0
#define __pp_op_gt_12_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 12 failed. '__pp_op_6__()' or '__pp_op_12__()' not defined"

#endif
