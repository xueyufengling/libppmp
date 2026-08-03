#if defined(__pp_op_13__) && defined(__pp_op_14__)

#undef __pp_op_lt_13_14__
#undef __pp_op_eq_13_14__
#undef __pp_op_gt_13_14__
#undef __pp_op_lt_14_13__
#undef __pp_op_eq_14_13__
#undef __pp_op_gt_14_13__

#if (__pp_op_13__()) < (__pp_op_14__())
#define __pp_op_lt_13_14__() 1
#define __pp_op_eq_13_14__() 0
#define __pp_op_gt_13_14__() 0
#define __pp_op_lt_14_13__() 0
#define __pp_op_eq_14_13__() 0
#define __pp_op_gt_14_13__() 1
#elif (__pp_op_13__()) == (__pp_op_14__())
#define __pp_op_lt_13_14__() 0
#define __pp_op_eq_13_14__() 1
#define __pp_op_gt_13_14__() 0
#define __pp_op_lt_14_13__() 0
#define __pp_op_eq_14_13__() 1
#define __pp_op_gt_14_13__() 0
#elif (__pp_op_13__()) > (__pp_op_14__())
#define __pp_op_lt_13_14__() 0
#define __pp_op_eq_13_14__() 0
#define __pp_op_gt_13_14__() 1
#define __pp_op_lt_14_13__() 1
#define __pp_op_eq_14_13__() 0
#define __pp_op_gt_14_13__() 0
#endif

#else

#error "cmp 'pp_op' 13 and 14 failed. '__pp_op_13__()' or '__pp_op_14__()' not defined"

#endif
