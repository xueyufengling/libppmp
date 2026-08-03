#if defined(__pp_op_14__) && defined(__pp_op_9__)

#undef __pp_op_lt_14_9__
#undef __pp_op_eq_14_9__
#undef __pp_op_gt_14_9__
#undef __pp_op_lt_9_14__
#undef __pp_op_eq_9_14__
#undef __pp_op_gt_9_14__

#if (__pp_op_14__()) < (__pp_op_9__())
#define __pp_op_lt_14_9__() 1
#define __pp_op_eq_14_9__() 0
#define __pp_op_gt_14_9__() 0
#define __pp_op_lt_9_14__() 0
#define __pp_op_eq_9_14__() 0
#define __pp_op_gt_9_14__() 1
#elif (__pp_op_14__()) == (__pp_op_9__())
#define __pp_op_lt_14_9__() 0
#define __pp_op_eq_14_9__() 1
#define __pp_op_gt_14_9__() 0
#define __pp_op_lt_9_14__() 0
#define __pp_op_eq_9_14__() 1
#define __pp_op_gt_9_14__() 0
#elif (__pp_op_14__()) > (__pp_op_9__())
#define __pp_op_lt_14_9__() 0
#define __pp_op_eq_14_9__() 0
#define __pp_op_gt_14_9__() 1
#define __pp_op_lt_9_14__() 1
#define __pp_op_eq_9_14__() 0
#define __pp_op_gt_9_14__() 0
#endif

#else

#error "cmp 'pp_op' 14 and 9 failed. '__pp_op_14__()' or '__pp_op_9__()' not defined"

#endif
