#if defined(__pp_op_12__) && defined(__pp_op_14__)

#undef __pp_op_lt_12_14__
#undef __pp_op_eq_12_14__
#undef __pp_op_gt_12_14__
#undef __pp_op_lt_14_12__
#undef __pp_op_eq_14_12__
#undef __pp_op_gt_14_12__

#if (__pp_op_12__()) < (__pp_op_14__())
#define __pp_op_lt_12_14__() 1
#define __pp_op_eq_12_14__() 0
#define __pp_op_gt_12_14__() 0
#define __pp_op_lt_14_12__() 0
#define __pp_op_eq_14_12__() 0
#define __pp_op_gt_14_12__() 1
#elif (__pp_op_12__()) == (__pp_op_14__())
#define __pp_op_lt_12_14__() 0
#define __pp_op_eq_12_14__() 1
#define __pp_op_gt_12_14__() 0
#define __pp_op_lt_14_12__() 0
#define __pp_op_eq_14_12__() 1
#define __pp_op_gt_14_12__() 0
#elif (__pp_op_12__()) > (__pp_op_14__())
#define __pp_op_lt_12_14__() 0
#define __pp_op_eq_12_14__() 0
#define __pp_op_gt_12_14__() 1
#define __pp_op_lt_14_12__() 1
#define __pp_op_eq_14_12__() 0
#define __pp_op_gt_14_12__() 0
#endif

#else

#error "cmp 'pp_op' 12 and 14 failed. '__pp_op_12__()' or '__pp_op_14__()' not defined"

#endif
