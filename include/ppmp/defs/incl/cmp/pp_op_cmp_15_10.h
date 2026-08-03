#if defined(__pp_op_15__) && defined(__pp_op_10__)

#undef __pp_op_lt_15_10__
#undef __pp_op_eq_15_10__
#undef __pp_op_gt_15_10__
#undef __pp_op_lt_10_15__
#undef __pp_op_eq_10_15__
#undef __pp_op_gt_10_15__

#if (__pp_op_15__()) < (__pp_op_10__())
#define __pp_op_lt_15_10__() 1
#define __pp_op_eq_15_10__() 0
#define __pp_op_gt_15_10__() 0
#define __pp_op_lt_10_15__() 0
#define __pp_op_eq_10_15__() 0
#define __pp_op_gt_10_15__() 1
#elif (__pp_op_15__()) == (__pp_op_10__())
#define __pp_op_lt_15_10__() 0
#define __pp_op_eq_15_10__() 1
#define __pp_op_gt_15_10__() 0
#define __pp_op_lt_10_15__() 0
#define __pp_op_eq_10_15__() 1
#define __pp_op_gt_10_15__() 0
#elif (__pp_op_15__()) > (__pp_op_10__())
#define __pp_op_lt_15_10__() 0
#define __pp_op_eq_15_10__() 0
#define __pp_op_gt_15_10__() 1
#define __pp_op_lt_10_15__() 1
#define __pp_op_eq_10_15__() 0
#define __pp_op_gt_10_15__() 0
#endif

#else

#error "cmp 'pp_op' 15 and 10 failed. '__pp_op_15__()' or '__pp_op_10__()' not defined"

#endif
