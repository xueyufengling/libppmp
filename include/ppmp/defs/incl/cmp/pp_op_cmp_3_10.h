#if defined(__pp_op_3__) && defined(__pp_op_10__)

#undef __pp_op_lt_3_10__
#undef __pp_op_eq_3_10__
#undef __pp_op_gt_3_10__
#undef __pp_op_lt_10_3__
#undef __pp_op_eq_10_3__
#undef __pp_op_gt_10_3__

#if (__pp_op_3__()) < (__pp_op_10__())
#define __pp_op_lt_3_10__() 1
#define __pp_op_eq_3_10__() 0
#define __pp_op_gt_3_10__() 0
#define __pp_op_lt_10_3__() 0
#define __pp_op_eq_10_3__() 0
#define __pp_op_gt_10_3__() 1
#elif (__pp_op_3__()) == (__pp_op_10__())
#define __pp_op_lt_3_10__() 0
#define __pp_op_eq_3_10__() 1
#define __pp_op_gt_3_10__() 0
#define __pp_op_lt_10_3__() 0
#define __pp_op_eq_10_3__() 1
#define __pp_op_gt_10_3__() 0
#elif (__pp_op_3__()) > (__pp_op_10__())
#define __pp_op_lt_3_10__() 0
#define __pp_op_eq_3_10__() 0
#define __pp_op_gt_3_10__() 1
#define __pp_op_lt_10_3__() 1
#define __pp_op_eq_10_3__() 0
#define __pp_op_gt_10_3__() 0
#endif

#else

#error "cmp op 3 and op 10 failed. '__pp_op_3__' or '__pp_op_10__' not defined"

#endif
