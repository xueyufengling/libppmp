#if defined(__pp_op_14__) && defined(__pp_op_10__)

#undef __pp_op_lt_14_10__
#undef __pp_op_eq_14_10__
#undef __pp_op_gt_14_10__
#undef __pp_op_lt_10_14__
#undef __pp_op_eq_10_14__
#undef __pp_op_gt_10_14__

#if (__pp_op_14__()) < (__pp_op_10__())
#define __pp_op_lt_14_10__() 1
#define __pp_op_eq_14_10__() 0
#define __pp_op_gt_14_10__() 0
#define __pp_op_lt_10_14__() 0
#define __pp_op_eq_10_14__() 0
#define __pp_op_gt_10_14__() 1
#elif (__pp_op_14__()) == (__pp_op_10__())
#define __pp_op_lt_14_10__() 0
#define __pp_op_eq_14_10__() 1
#define __pp_op_gt_14_10__() 0
#define __pp_op_lt_10_14__() 0
#define __pp_op_eq_10_14__() 1
#define __pp_op_gt_10_14__() 0
#elif (__pp_op_14__()) > (__pp_op_10__())
#define __pp_op_lt_14_10__() 0
#define __pp_op_eq_14_10__() 0
#define __pp_op_gt_14_10__() 1
#define __pp_op_lt_10_14__() 1
#define __pp_op_eq_10_14__() 0
#define __pp_op_gt_10_14__() 0
#endif

#else

#error "cmp op 14 and op 10 failed. '__pp_op_14__' or '__pp_op_10__' not defined"

#endif
