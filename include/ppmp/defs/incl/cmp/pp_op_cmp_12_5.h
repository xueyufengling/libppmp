#if defined(__pp_op_12__) && defined(__pp_op_5__)

#undef __pp_op_lt_12_5__
#undef __pp_op_eq_12_5__
#undef __pp_op_gt_12_5__
#undef __pp_op_lt_5_12__
#undef __pp_op_eq_5_12__
#undef __pp_op_gt_5_12__

#if (__pp_op_12__()) < (__pp_op_5__())
#define __pp_op_lt_12_5__() 1
#define __pp_op_eq_12_5__() 0
#define __pp_op_gt_12_5__() 0
#define __pp_op_lt_5_12__() 0
#define __pp_op_eq_5_12__() 0
#define __pp_op_gt_5_12__() 1
#elif (__pp_op_12__()) == (__pp_op_5__())
#define __pp_op_lt_12_5__() 0
#define __pp_op_eq_12_5__() 1
#define __pp_op_gt_12_5__() 0
#define __pp_op_lt_5_12__() 0
#define __pp_op_eq_5_12__() 1
#define __pp_op_gt_5_12__() 0
#elif (__pp_op_12__()) > (__pp_op_5__())
#define __pp_op_lt_12_5__() 0
#define __pp_op_eq_12_5__() 0
#define __pp_op_gt_12_5__() 1
#define __pp_op_lt_5_12__() 1
#define __pp_op_eq_5_12__() 0
#define __pp_op_gt_5_12__() 0
#endif

#else

#error "cmp 'pp_op' 12 and 5 failed. '__pp_op_12__()' or '__pp_op_5__()' not defined"

#endif
