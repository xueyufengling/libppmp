#if defined(__pp_op_15__) && defined(__pp_op_9__)

#undef __pp_op_lt_15_9__
#undef __pp_op_eq_15_9__
#undef __pp_op_gt_15_9__
#undef __pp_op_lt_9_15__
#undef __pp_op_eq_9_15__
#undef __pp_op_gt_9_15__

#if (__pp_op_15__()) < (__pp_op_9__())
#define __pp_op_lt_15_9__() 1
#define __pp_op_eq_15_9__() 0
#define __pp_op_gt_15_9__() 0
#define __pp_op_lt_9_15__() 0
#define __pp_op_eq_9_15__() 0
#define __pp_op_gt_9_15__() 1
#elif (__pp_op_15__()) == (__pp_op_9__())
#define __pp_op_lt_15_9__() 0
#define __pp_op_eq_15_9__() 1
#define __pp_op_gt_15_9__() 0
#define __pp_op_lt_9_15__() 0
#define __pp_op_eq_9_15__() 1
#define __pp_op_gt_9_15__() 0
#elif (__pp_op_15__()) > (__pp_op_9__())
#define __pp_op_lt_15_9__() 0
#define __pp_op_eq_15_9__() 0
#define __pp_op_gt_15_9__() 1
#define __pp_op_lt_9_15__() 1
#define __pp_op_eq_9_15__() 0
#define __pp_op_gt_9_15__() 0
#endif

#else

#error "cmp op 15 and op 9 failed. '__pp_op_15__' or '__pp_op_9__' not defined"

#endif
