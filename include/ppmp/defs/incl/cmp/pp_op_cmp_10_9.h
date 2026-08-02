#if defined(__pp_op_10__) && defined(__pp_op_9__)

#undef __pp_op_lt_10_9__
#undef __pp_op_eq_10_9__
#undef __pp_op_gt_10_9__
#undef __pp_op_lt_9_10__
#undef __pp_op_eq_9_10__
#undef __pp_op_gt_9_10__

#if (__pp_op_10__()) < (__pp_op_9__())
#define __pp_op_lt_10_9__() 1
#define __pp_op_eq_10_9__() 0
#define __pp_op_gt_10_9__() 0
#define __pp_op_lt_9_10__() 0
#define __pp_op_eq_9_10__() 0
#define __pp_op_gt_9_10__() 1
#elif (__pp_op_10__()) == (__pp_op_9__())
#define __pp_op_lt_10_9__() 0
#define __pp_op_eq_10_9__() 1
#define __pp_op_gt_10_9__() 0
#define __pp_op_lt_9_10__() 0
#define __pp_op_eq_9_10__() 1
#define __pp_op_gt_9_10__() 0
#elif (__pp_op_10__()) > (__pp_op_9__())
#define __pp_op_lt_10_9__() 0
#define __pp_op_eq_10_9__() 0
#define __pp_op_gt_10_9__() 1
#define __pp_op_lt_9_10__() 1
#define __pp_op_eq_9_10__() 0
#define __pp_op_gt_9_10__() 0
#endif

#else

#error "cmp op 10 and op 9 failed. '__pp_op_10__' or '__pp_op_9__' not defined"

#endif
