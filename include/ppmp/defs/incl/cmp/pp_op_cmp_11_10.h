#if defined(__pp_op_11__) && defined(__pp_op_10__)

#undef __pp_op_lt_11_10__
#undef __pp_op_eq_11_10__
#undef __pp_op_gt_11_10__
#undef __pp_op_lt_10_11__
#undef __pp_op_eq_10_11__
#undef __pp_op_gt_10_11__

#if (__pp_op_11__()) < (__pp_op_10__())
#define __pp_op_lt_11_10__() 1
#define __pp_op_eq_11_10__() 0
#define __pp_op_gt_11_10__() 0
#define __pp_op_lt_10_11__() 0
#define __pp_op_eq_10_11__() 0
#define __pp_op_gt_10_11__() 1
#elif (__pp_op_11__()) == (__pp_op_10__())
#define __pp_op_lt_11_10__() 0
#define __pp_op_eq_11_10__() 1
#define __pp_op_gt_11_10__() 0
#define __pp_op_lt_10_11__() 0
#define __pp_op_eq_10_11__() 1
#define __pp_op_gt_10_11__() 0
#elif (__pp_op_11__()) > (__pp_op_10__())
#define __pp_op_lt_11_10__() 0
#define __pp_op_eq_11_10__() 0
#define __pp_op_gt_11_10__() 1
#define __pp_op_lt_10_11__() 1
#define __pp_op_eq_10_11__() 0
#define __pp_op_gt_10_11__() 0
#endif

#else

#error "cmp op 11 and op 10 failed. '__pp_op_11__' or '__pp_op_10__' not defined"

#endif
