#if defined(__pp_op_10__) && defined(__pp_op_2__)

#undef __pp_op_lt_10_2__
#undef __pp_op_eq_10_2__
#undef __pp_op_gt_10_2__
#undef __pp_op_lt_2_10__
#undef __pp_op_eq_2_10__
#undef __pp_op_gt_2_10__

#if (__pp_op_10__()) < (__pp_op_2__())
#define __pp_op_lt_10_2__() 1
#define __pp_op_eq_10_2__() 0
#define __pp_op_gt_10_2__() 0
#define __pp_op_lt_2_10__() 0
#define __pp_op_eq_2_10__() 0
#define __pp_op_gt_2_10__() 1
#elif (__pp_op_10__()) == (__pp_op_2__())
#define __pp_op_lt_10_2__() 0
#define __pp_op_eq_10_2__() 1
#define __pp_op_gt_10_2__() 0
#define __pp_op_lt_2_10__() 0
#define __pp_op_eq_2_10__() 1
#define __pp_op_gt_2_10__() 0
#elif (__pp_op_10__()) > (__pp_op_2__())
#define __pp_op_lt_10_2__() 0
#define __pp_op_eq_10_2__() 0
#define __pp_op_gt_10_2__() 1
#define __pp_op_lt_2_10__() 1
#define __pp_op_eq_2_10__() 0
#define __pp_op_gt_2_10__() 0
#endif

#else

#error "cmp op 10 and op 2 failed. '__pp_op_10__' or '__pp_op_2__' not defined"

#endif
