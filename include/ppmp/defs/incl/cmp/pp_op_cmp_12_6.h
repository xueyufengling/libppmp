#if defined(__pp_op_12__) && defined(__pp_op_6__)

#undef __pp_op_lt_12_6__
#undef __pp_op_eq_12_6__
#undef __pp_op_gt_12_6__
#undef __pp_op_lt_6_12__
#undef __pp_op_eq_6_12__
#undef __pp_op_gt_6_12__

#if (__pp_op_12__()) < (__pp_op_6__())
#define __pp_op_lt_12_6__() 1
#define __pp_op_eq_12_6__() 0
#define __pp_op_gt_12_6__() 0
#define __pp_op_lt_6_12__() 0
#define __pp_op_eq_6_12__() 0
#define __pp_op_gt_6_12__() 1
#elif (__pp_op_12__()) == (__pp_op_6__())
#define __pp_op_lt_12_6__() 0
#define __pp_op_eq_12_6__() 1
#define __pp_op_gt_12_6__() 0
#define __pp_op_lt_6_12__() 0
#define __pp_op_eq_6_12__() 1
#define __pp_op_gt_6_12__() 0
#elif (__pp_op_12__()) > (__pp_op_6__())
#define __pp_op_lt_12_6__() 0
#define __pp_op_eq_12_6__() 0
#define __pp_op_gt_12_6__() 1
#define __pp_op_lt_6_12__() 1
#define __pp_op_eq_6_12__() 0
#define __pp_op_gt_6_12__() 0
#endif

#else

#error "cmp 'pp_op' 12 and 6 failed. '__pp_op_12__()' or '__pp_op_6__()' not defined"

#endif
