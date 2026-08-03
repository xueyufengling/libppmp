#if defined(__pp_op_6__) && defined(__pp_op_14__)

#undef __pp_op_lt_6_14__
#undef __pp_op_eq_6_14__
#undef __pp_op_gt_6_14__
#undef __pp_op_lt_14_6__
#undef __pp_op_eq_14_6__
#undef __pp_op_gt_14_6__

#if (__pp_op_6__()) < (__pp_op_14__())
#define __pp_op_lt_6_14__() 1
#define __pp_op_eq_6_14__() 0
#define __pp_op_gt_6_14__() 0
#define __pp_op_lt_14_6__() 0
#define __pp_op_eq_14_6__() 0
#define __pp_op_gt_14_6__() 1
#elif (__pp_op_6__()) == (__pp_op_14__())
#define __pp_op_lt_6_14__() 0
#define __pp_op_eq_6_14__() 1
#define __pp_op_gt_6_14__() 0
#define __pp_op_lt_14_6__() 0
#define __pp_op_eq_14_6__() 1
#define __pp_op_gt_14_6__() 0
#elif (__pp_op_6__()) > (__pp_op_14__())
#define __pp_op_lt_6_14__() 0
#define __pp_op_eq_6_14__() 0
#define __pp_op_gt_6_14__() 1
#define __pp_op_lt_14_6__() 1
#define __pp_op_eq_14_6__() 0
#define __pp_op_gt_14_6__() 0
#endif

#else

#error "cmp 'pp_op' 6 and 14 failed. '__pp_op_6__()' or '__pp_op_14__()' not defined"

#endif
