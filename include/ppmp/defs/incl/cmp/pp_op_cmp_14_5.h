#if defined(__pp_op_14__) && defined(__pp_op_5__)

#undef __pp_op_lt_14_5__
#undef __pp_op_eq_14_5__
#undef __pp_op_gt_14_5__
#undef __pp_op_lt_5_14__
#undef __pp_op_eq_5_14__
#undef __pp_op_gt_5_14__

#if (__pp_op_14__()) < (__pp_op_5__())
#define __pp_op_lt_14_5__() 1
#define __pp_op_eq_14_5__() 0
#define __pp_op_gt_14_5__() 0
#define __pp_op_lt_5_14__() 0
#define __pp_op_eq_5_14__() 0
#define __pp_op_gt_5_14__() 1
#elif (__pp_op_14__()) == (__pp_op_5__())
#define __pp_op_lt_14_5__() 0
#define __pp_op_eq_14_5__() 1
#define __pp_op_gt_14_5__() 0
#define __pp_op_lt_5_14__() 0
#define __pp_op_eq_5_14__() 1
#define __pp_op_gt_5_14__() 0
#elif (__pp_op_14__()) > (__pp_op_5__())
#define __pp_op_lt_14_5__() 0
#define __pp_op_eq_14_5__() 0
#define __pp_op_gt_14_5__() 1
#define __pp_op_lt_5_14__() 1
#define __pp_op_eq_5_14__() 0
#define __pp_op_gt_5_14__() 0
#endif

#else

#error "cmp 'pp_op' 14 and 5 failed. '__pp_op_14__()' or '__pp_op_5__()' not defined"

#endif
