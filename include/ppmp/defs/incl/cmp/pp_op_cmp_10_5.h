#if defined(__pp_op_10__) && defined(__pp_op_5__)

#undef __pp_op_lt_10_5__
#undef __pp_op_eq_10_5__
#undef __pp_op_gt_10_5__
#undef __pp_op_lt_5_10__
#undef __pp_op_eq_5_10__
#undef __pp_op_gt_5_10__

#if (__pp_op_10__()) < (__pp_op_5__())
#define __pp_op_lt_10_5__() 1
#define __pp_op_eq_10_5__() 0
#define __pp_op_gt_10_5__() 0
#define __pp_op_lt_5_10__() 0
#define __pp_op_eq_5_10__() 0
#define __pp_op_gt_5_10__() 1
#elif (__pp_op_10__()) == (__pp_op_5__())
#define __pp_op_lt_10_5__() 0
#define __pp_op_eq_10_5__() 1
#define __pp_op_gt_10_5__() 0
#define __pp_op_lt_5_10__() 0
#define __pp_op_eq_5_10__() 1
#define __pp_op_gt_5_10__() 0
#elif (__pp_op_10__()) > (__pp_op_5__())
#define __pp_op_lt_10_5__() 0
#define __pp_op_eq_10_5__() 0
#define __pp_op_gt_10_5__() 1
#define __pp_op_lt_5_10__() 1
#define __pp_op_eq_5_10__() 0
#define __pp_op_gt_5_10__() 0
#endif

#else

#error "cmp op 10 and op 5 failed. '__pp_op_10__' or '__pp_op_5__' not defined"

#endif
