#if defined(__pp_op_14__) && defined(__pp_op_7__)

#undef __pp_op_lt_14_7__
#undef __pp_op_eq_14_7__
#undef __pp_op_gt_14_7__
#undef __pp_op_lt_7_14__
#undef __pp_op_eq_7_14__
#undef __pp_op_gt_7_14__

#if (__pp_op_14__()) < (__pp_op_7__())
#define __pp_op_lt_14_7__() 1
#define __pp_op_eq_14_7__() 0
#define __pp_op_gt_14_7__() 0
#define __pp_op_lt_7_14__() 0
#define __pp_op_eq_7_14__() 0
#define __pp_op_gt_7_14__() 1
#elif (__pp_op_14__()) == (__pp_op_7__())
#define __pp_op_lt_14_7__() 0
#define __pp_op_eq_14_7__() 1
#define __pp_op_gt_14_7__() 0
#define __pp_op_lt_7_14__() 0
#define __pp_op_eq_7_14__() 1
#define __pp_op_gt_7_14__() 0
#elif (__pp_op_14__()) > (__pp_op_7__())
#define __pp_op_lt_14_7__() 0
#define __pp_op_eq_14_7__() 0
#define __pp_op_gt_14_7__() 1
#define __pp_op_lt_7_14__() 1
#define __pp_op_eq_7_14__() 0
#define __pp_op_gt_7_14__() 0
#endif

#else

#error "cmp 'pp_op' 14 and 7 failed. '__pp_op_14__()' or '__pp_op_7__()' not defined"

#endif
