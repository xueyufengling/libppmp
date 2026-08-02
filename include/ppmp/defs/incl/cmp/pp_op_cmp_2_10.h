#if defined(__pp_op_2__) && defined(__pp_op_10__)

#undef __pp_op_lt_2_10__
#undef __pp_op_eq_2_10__
#undef __pp_op_gt_2_10__
#undef __pp_op_lt_10_2__
#undef __pp_op_eq_10_2__
#undef __pp_op_gt_10_2__

#if (__pp_op_2__()) < (__pp_op_10__())
#define __pp_op_lt_2_10__() 1
#define __pp_op_eq_2_10__() 0
#define __pp_op_gt_2_10__() 0
#define __pp_op_lt_10_2__() 0
#define __pp_op_eq_10_2__() 0
#define __pp_op_gt_10_2__() 1
#elif (__pp_op_2__()) == (__pp_op_10__())
#define __pp_op_lt_2_10__() 0
#define __pp_op_eq_2_10__() 1
#define __pp_op_gt_2_10__() 0
#define __pp_op_lt_10_2__() 0
#define __pp_op_eq_10_2__() 1
#define __pp_op_gt_10_2__() 0
#elif (__pp_op_2__()) > (__pp_op_10__())
#define __pp_op_lt_2_10__() 0
#define __pp_op_eq_2_10__() 0
#define __pp_op_gt_2_10__() 1
#define __pp_op_lt_10_2__() 1
#define __pp_op_eq_10_2__() 0
#define __pp_op_gt_10_2__() 0
#endif

#else

#error "cmp op 2 and op 10 failed. '__pp_op_2__' or '__pp_op_10__' not defined"

#endif
