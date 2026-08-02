#if defined(__pp_op_1__) && defined(__pp_op_14__)

#undef __pp_op_lt_1_14__
#undef __pp_op_eq_1_14__
#undef __pp_op_gt_1_14__
#undef __pp_op_lt_14_1__
#undef __pp_op_eq_14_1__
#undef __pp_op_gt_14_1__

#if (__pp_op_1__()) < (__pp_op_14__())
#define __pp_op_lt_1_14__() 1
#define __pp_op_eq_1_14__() 0
#define __pp_op_gt_1_14__() 0
#define __pp_op_lt_14_1__() 0
#define __pp_op_eq_14_1__() 0
#define __pp_op_gt_14_1__() 1
#elif (__pp_op_1__()) == (__pp_op_14__())
#define __pp_op_lt_1_14__() 0
#define __pp_op_eq_1_14__() 1
#define __pp_op_gt_1_14__() 0
#define __pp_op_lt_14_1__() 0
#define __pp_op_eq_14_1__() 1
#define __pp_op_gt_14_1__() 0
#elif (__pp_op_1__()) > (__pp_op_14__())
#define __pp_op_lt_1_14__() 0
#define __pp_op_eq_1_14__() 0
#define __pp_op_gt_1_14__() 1
#define __pp_op_lt_14_1__() 1
#define __pp_op_eq_14_1__() 0
#define __pp_op_gt_14_1__() 0
#endif

#else

#error "cmp op 1 and op 14 failed. '__pp_op_1__' or '__pp_op_14__' not defined"

#endif
