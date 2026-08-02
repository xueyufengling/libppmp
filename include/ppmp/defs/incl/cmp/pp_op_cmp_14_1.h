#if defined(__pp_op_14__) && defined(__pp_op_1__)

#undef __pp_op_lt_14_1__
#undef __pp_op_eq_14_1__
#undef __pp_op_gt_14_1__
#undef __pp_op_lt_1_14__
#undef __pp_op_eq_1_14__
#undef __pp_op_gt_1_14__

#if (__pp_op_14__()) < (__pp_op_1__())
#define __pp_op_lt_14_1__() 1
#define __pp_op_eq_14_1__() 0
#define __pp_op_gt_14_1__() 0
#define __pp_op_lt_1_14__() 0
#define __pp_op_eq_1_14__() 0
#define __pp_op_gt_1_14__() 1
#elif (__pp_op_14__()) == (__pp_op_1__())
#define __pp_op_lt_14_1__() 0
#define __pp_op_eq_14_1__() 1
#define __pp_op_gt_14_1__() 0
#define __pp_op_lt_1_14__() 0
#define __pp_op_eq_1_14__() 1
#define __pp_op_gt_1_14__() 0
#elif (__pp_op_14__()) > (__pp_op_1__())
#define __pp_op_lt_14_1__() 0
#define __pp_op_eq_14_1__() 0
#define __pp_op_gt_14_1__() 1
#define __pp_op_lt_1_14__() 1
#define __pp_op_eq_1_14__() 0
#define __pp_op_gt_1_14__() 0
#endif

#else

#error "cmp op 14 and op 1 failed. '__pp_op_14__' or '__pp_op_1__' not defined"

#endif
