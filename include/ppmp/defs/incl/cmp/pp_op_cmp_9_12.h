#if defined(__pp_op_9__) && defined(__pp_op_12__)

#undef __pp_op_lt_9_12__
#undef __pp_op_eq_9_12__
#undef __pp_op_gt_9_12__
#undef __pp_op_lt_12_9__
#undef __pp_op_eq_12_9__
#undef __pp_op_gt_12_9__

#if (__pp_op_9__()) < (__pp_op_12__())
#define __pp_op_lt_9_12__() 1
#define __pp_op_eq_9_12__() 0
#define __pp_op_gt_9_12__() 0
#define __pp_op_lt_12_9__() 0
#define __pp_op_eq_12_9__() 0
#define __pp_op_gt_12_9__() 1
#elif (__pp_op_9__()) == (__pp_op_12__())
#define __pp_op_lt_9_12__() 0
#define __pp_op_eq_9_12__() 1
#define __pp_op_gt_9_12__() 0
#define __pp_op_lt_12_9__() 0
#define __pp_op_eq_12_9__() 1
#define __pp_op_gt_12_9__() 0
#elif (__pp_op_9__()) > (__pp_op_12__())
#define __pp_op_lt_9_12__() 0
#define __pp_op_eq_9_12__() 0
#define __pp_op_gt_9_12__() 1
#define __pp_op_lt_12_9__() 1
#define __pp_op_eq_12_9__() 0
#define __pp_op_gt_12_9__() 0
#endif

#else

#error "cmp 'pp_op' 9 and 12 failed. '__pp_op_9__()' or '__pp_op_12__()' not defined"

#endif
