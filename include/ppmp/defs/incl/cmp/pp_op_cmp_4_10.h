#if defined(__pp_op_4__) && defined(__pp_op_10__)

#undef __pp_op_lt_4_10__
#undef __pp_op_eq_4_10__
#undef __pp_op_gt_4_10__
#undef __pp_op_lt_10_4__
#undef __pp_op_eq_10_4__
#undef __pp_op_gt_10_4__

#if (__pp_op_4__()) < (__pp_op_10__())
#define __pp_op_lt_4_10__() 1
#define __pp_op_eq_4_10__() 0
#define __pp_op_gt_4_10__() 0
#define __pp_op_lt_10_4__() 0
#define __pp_op_eq_10_4__() 0
#define __pp_op_gt_10_4__() 1
#elif (__pp_op_4__()) == (__pp_op_10__())
#define __pp_op_lt_4_10__() 0
#define __pp_op_eq_4_10__() 1
#define __pp_op_gt_4_10__() 0
#define __pp_op_lt_10_4__() 0
#define __pp_op_eq_10_4__() 1
#define __pp_op_gt_10_4__() 0
#elif (__pp_op_4__()) > (__pp_op_10__())
#define __pp_op_lt_4_10__() 0
#define __pp_op_eq_4_10__() 0
#define __pp_op_gt_4_10__() 1
#define __pp_op_lt_10_4__() 1
#define __pp_op_eq_10_4__() 0
#define __pp_op_gt_10_4__() 0
#endif

#else

#error "cmp 'pp_op' 4 and 10 failed. '__pp_op_4__()' or '__pp_op_10__()' not defined"

#endif
