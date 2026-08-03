#if defined(__pp_op_0__) && defined(__pp_op_15__)

#undef __pp_op_lt_0_15__
#undef __pp_op_eq_0_15__
#undef __pp_op_gt_0_15__
#undef __pp_op_lt_15_0__
#undef __pp_op_eq_15_0__
#undef __pp_op_gt_15_0__

#if (__pp_op_0__()) < (__pp_op_15__())
#define __pp_op_lt_0_15__() 1
#define __pp_op_eq_0_15__() 0
#define __pp_op_gt_0_15__() 0
#define __pp_op_lt_15_0__() 0
#define __pp_op_eq_15_0__() 0
#define __pp_op_gt_15_0__() 1
#elif (__pp_op_0__()) == (__pp_op_15__())
#define __pp_op_lt_0_15__() 0
#define __pp_op_eq_0_15__() 1
#define __pp_op_gt_0_15__() 0
#define __pp_op_lt_15_0__() 0
#define __pp_op_eq_15_0__() 1
#define __pp_op_gt_15_0__() 0
#elif (__pp_op_0__()) > (__pp_op_15__())
#define __pp_op_lt_0_15__() 0
#define __pp_op_eq_0_15__() 0
#define __pp_op_gt_0_15__() 1
#define __pp_op_lt_15_0__() 1
#define __pp_op_eq_15_0__() 0
#define __pp_op_gt_15_0__() 0
#endif

#else

#error "cmp 'pp_op' 0 and 15 failed. '__pp_op_0__()' or '__pp_op_15__()' not defined"

#endif
