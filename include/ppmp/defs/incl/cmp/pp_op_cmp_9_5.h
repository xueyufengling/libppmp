#if defined(__pp_op_9__) && defined(__pp_op_5__)

#undef __pp_op_lt_9_5__
#undef __pp_op_eq_9_5__
#undef __pp_op_gt_9_5__
#undef __pp_op_lt_5_9__
#undef __pp_op_eq_5_9__
#undef __pp_op_gt_5_9__

#if (__pp_op_9__()) < (__pp_op_5__())
#define __pp_op_lt_9_5__() 1
#define __pp_op_eq_9_5__() 0
#define __pp_op_gt_9_5__() 0
#define __pp_op_lt_5_9__() 0
#define __pp_op_eq_5_9__() 0
#define __pp_op_gt_5_9__() 1
#elif (__pp_op_9__()) == (__pp_op_5__())
#define __pp_op_lt_9_5__() 0
#define __pp_op_eq_9_5__() 1
#define __pp_op_gt_9_5__() 0
#define __pp_op_lt_5_9__() 0
#define __pp_op_eq_5_9__() 1
#define __pp_op_gt_5_9__() 0
#elif (__pp_op_9__()) > (__pp_op_5__())
#define __pp_op_lt_9_5__() 0
#define __pp_op_eq_9_5__() 0
#define __pp_op_gt_9_5__() 1
#define __pp_op_lt_5_9__() 1
#define __pp_op_eq_5_9__() 0
#define __pp_op_gt_5_9__() 0
#endif

#else

#error "cmp 'pp_op' 9 and 5 failed. '__pp_op_9__()' or '__pp_op_5__()' not defined"

#endif
