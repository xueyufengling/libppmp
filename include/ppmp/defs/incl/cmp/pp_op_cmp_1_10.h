#if defined(__pp_op_1__) && defined(__pp_op_10__)

#undef __pp_op_lt_1_10__
#undef __pp_op_eq_1_10__
#undef __pp_op_gt_1_10__
#undef __pp_op_lt_10_1__
#undef __pp_op_eq_10_1__
#undef __pp_op_gt_10_1__

#if (__pp_op_1__()) < (__pp_op_10__())
#define __pp_op_lt_1_10__() 1
#define __pp_op_eq_1_10__() 0
#define __pp_op_gt_1_10__() 0
#define __pp_op_lt_10_1__() 0
#define __pp_op_eq_10_1__() 0
#define __pp_op_gt_10_1__() 1
#elif (__pp_op_1__()) == (__pp_op_10__())
#define __pp_op_lt_1_10__() 0
#define __pp_op_eq_1_10__() 1
#define __pp_op_gt_1_10__() 0
#define __pp_op_lt_10_1__() 0
#define __pp_op_eq_10_1__() 1
#define __pp_op_gt_10_1__() 0
#elif (__pp_op_1__()) > (__pp_op_10__())
#define __pp_op_lt_1_10__() 0
#define __pp_op_eq_1_10__() 0
#define __pp_op_gt_1_10__() 1
#define __pp_op_lt_10_1__() 1
#define __pp_op_eq_10_1__() 0
#define __pp_op_gt_10_1__() 0
#endif

#else

#error "cmp op 1 and op 10 failed. '__pp_op_1__' or '__pp_op_10__' not defined"

#endif
