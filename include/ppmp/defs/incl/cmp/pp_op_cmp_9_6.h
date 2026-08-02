#if defined(__pp_op_9__) && defined(__pp_op_6__)

#undef __pp_op_lt_9_6__
#undef __pp_op_eq_9_6__
#undef __pp_op_gt_9_6__
#undef __pp_op_lt_6_9__
#undef __pp_op_eq_6_9__
#undef __pp_op_gt_6_9__

#if (__pp_op_9__()) < (__pp_op_6__())
#define __pp_op_lt_9_6__() 1
#define __pp_op_eq_9_6__() 0
#define __pp_op_gt_9_6__() 0
#define __pp_op_lt_6_9__() 0
#define __pp_op_eq_6_9__() 0
#define __pp_op_gt_6_9__() 1
#elif (__pp_op_9__()) == (__pp_op_6__())
#define __pp_op_lt_9_6__() 0
#define __pp_op_eq_9_6__() 1
#define __pp_op_gt_9_6__() 0
#define __pp_op_lt_6_9__() 0
#define __pp_op_eq_6_9__() 1
#define __pp_op_gt_6_9__() 0
#elif (__pp_op_9__()) > (__pp_op_6__())
#define __pp_op_lt_9_6__() 0
#define __pp_op_eq_9_6__() 0
#define __pp_op_gt_9_6__() 1
#define __pp_op_lt_6_9__() 1
#define __pp_op_eq_6_9__() 0
#define __pp_op_gt_6_9__() 0
#endif

#else

#error "cmp op 9 and op 6 failed. '__pp_op_9__' or '__pp_op_6__' not defined"

#endif
