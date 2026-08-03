#if defined(__pp_op_13__) && defined(__pp_op_9__)

#undef __pp_op_lt_13_9__
#undef __pp_op_eq_13_9__
#undef __pp_op_gt_13_9__
#undef __pp_op_lt_9_13__
#undef __pp_op_eq_9_13__
#undef __pp_op_gt_9_13__

#if (__pp_op_13__()) < (__pp_op_9__())
#define __pp_op_lt_13_9__() 1
#define __pp_op_eq_13_9__() 0
#define __pp_op_gt_13_9__() 0
#define __pp_op_lt_9_13__() 0
#define __pp_op_eq_9_13__() 0
#define __pp_op_gt_9_13__() 1
#elif (__pp_op_13__()) == (__pp_op_9__())
#define __pp_op_lt_13_9__() 0
#define __pp_op_eq_13_9__() 1
#define __pp_op_gt_13_9__() 0
#define __pp_op_lt_9_13__() 0
#define __pp_op_eq_9_13__() 1
#define __pp_op_gt_9_13__() 0
#elif (__pp_op_13__()) > (__pp_op_9__())
#define __pp_op_lt_13_9__() 0
#define __pp_op_eq_13_9__() 0
#define __pp_op_gt_13_9__() 1
#define __pp_op_lt_9_13__() 1
#define __pp_op_eq_9_13__() 0
#define __pp_op_gt_9_13__() 0
#endif

#else

#error "cmp 'pp_op' 13 and 9 failed. '__pp_op_13__()' or '__pp_op_9__()' not defined"

#endif
