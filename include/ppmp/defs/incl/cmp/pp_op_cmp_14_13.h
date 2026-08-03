#if defined(__pp_op_14__) && defined(__pp_op_13__)

#undef __pp_op_lt_14_13__
#undef __pp_op_eq_14_13__
#undef __pp_op_gt_14_13__
#undef __pp_op_lt_13_14__
#undef __pp_op_eq_13_14__
#undef __pp_op_gt_13_14__

#if (__pp_op_14__()) < (__pp_op_13__())
#define __pp_op_lt_14_13__() 1
#define __pp_op_eq_14_13__() 0
#define __pp_op_gt_14_13__() 0
#define __pp_op_lt_13_14__() 0
#define __pp_op_eq_13_14__() 0
#define __pp_op_gt_13_14__() 1
#elif (__pp_op_14__()) == (__pp_op_13__())
#define __pp_op_lt_14_13__() 0
#define __pp_op_eq_14_13__() 1
#define __pp_op_gt_14_13__() 0
#define __pp_op_lt_13_14__() 0
#define __pp_op_eq_13_14__() 1
#define __pp_op_gt_13_14__() 0
#elif (__pp_op_14__()) > (__pp_op_13__())
#define __pp_op_lt_14_13__() 0
#define __pp_op_eq_14_13__() 0
#define __pp_op_gt_14_13__() 1
#define __pp_op_lt_13_14__() 1
#define __pp_op_eq_13_14__() 0
#define __pp_op_gt_13_14__() 0
#endif

#else

#error "cmp 'pp_op' 14 and 13 failed. '__pp_op_14__()' or '__pp_op_13__()' not defined"

#endif
