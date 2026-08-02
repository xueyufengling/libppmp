#if defined(__pp_op_3__) && defined(__pp_op_9__)

#undef __pp_op_lt_3_9__
#undef __pp_op_eq_3_9__
#undef __pp_op_gt_3_9__
#undef __pp_op_lt_9_3__
#undef __pp_op_eq_9_3__
#undef __pp_op_gt_9_3__

#if (__pp_op_3__()) < (__pp_op_9__())
#define __pp_op_lt_3_9__() 1
#define __pp_op_eq_3_9__() 0
#define __pp_op_gt_3_9__() 0
#define __pp_op_lt_9_3__() 0
#define __pp_op_eq_9_3__() 0
#define __pp_op_gt_9_3__() 1
#elif (__pp_op_3__()) == (__pp_op_9__())
#define __pp_op_lt_3_9__() 0
#define __pp_op_eq_3_9__() 1
#define __pp_op_gt_3_9__() 0
#define __pp_op_lt_9_3__() 0
#define __pp_op_eq_9_3__() 1
#define __pp_op_gt_9_3__() 0
#elif (__pp_op_3__()) > (__pp_op_9__())
#define __pp_op_lt_3_9__() 0
#define __pp_op_eq_3_9__() 0
#define __pp_op_gt_3_9__() 1
#define __pp_op_lt_9_3__() 1
#define __pp_op_eq_9_3__() 0
#define __pp_op_gt_9_3__() 0
#endif

#else

#error "cmp op 3 and op 9 failed. '__pp_op_3__' or '__pp_op_9__' not defined"

#endif
