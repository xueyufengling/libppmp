#if defined(__pp_op_8__) && defined(__pp_op_9__)

#undef __pp_op_lt_8_9__
#undef __pp_op_eq_8_9__
#undef __pp_op_gt_8_9__
#undef __pp_op_lt_9_8__
#undef __pp_op_eq_9_8__
#undef __pp_op_gt_9_8__

#if (__pp_op_8__()) < (__pp_op_9__())
#define __pp_op_lt_8_9__() 1
#define __pp_op_eq_8_9__() 0
#define __pp_op_gt_8_9__() 0
#define __pp_op_lt_9_8__() 0
#define __pp_op_eq_9_8__() 0
#define __pp_op_gt_9_8__() 1
#elif (__pp_op_8__()) == (__pp_op_9__())
#define __pp_op_lt_8_9__() 0
#define __pp_op_eq_8_9__() 1
#define __pp_op_gt_8_9__() 0
#define __pp_op_lt_9_8__() 0
#define __pp_op_eq_9_8__() 1
#define __pp_op_gt_9_8__() 0
#elif (__pp_op_8__()) > (__pp_op_9__())
#define __pp_op_lt_8_9__() 0
#define __pp_op_eq_8_9__() 0
#define __pp_op_gt_8_9__() 1
#define __pp_op_lt_9_8__() 1
#define __pp_op_eq_9_8__() 0
#define __pp_op_gt_9_8__() 0
#endif

#else

#error "cmp 'pp_op' 8 and 9 failed. '__pp_op_8__()' or '__pp_op_9__()' not defined"

#endif
