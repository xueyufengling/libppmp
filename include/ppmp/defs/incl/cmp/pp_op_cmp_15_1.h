#if defined(__pp_op_15__) && defined(__pp_op_1__)

#undef __pp_op_lt_15_1__
#undef __pp_op_eq_15_1__
#undef __pp_op_gt_15_1__
#undef __pp_op_lt_1_15__
#undef __pp_op_eq_1_15__
#undef __pp_op_gt_1_15__

#if (__pp_op_15__()) < (__pp_op_1__())
#define __pp_op_lt_15_1__() 1
#define __pp_op_eq_15_1__() 0
#define __pp_op_gt_15_1__() 0
#define __pp_op_lt_1_15__() 0
#define __pp_op_eq_1_15__() 0
#define __pp_op_gt_1_15__() 1
#elif (__pp_op_15__()) == (__pp_op_1__())
#define __pp_op_lt_15_1__() 0
#define __pp_op_eq_15_1__() 1
#define __pp_op_gt_15_1__() 0
#define __pp_op_lt_1_15__() 0
#define __pp_op_eq_1_15__() 1
#define __pp_op_gt_1_15__() 0
#elif (__pp_op_15__()) > (__pp_op_1__())
#define __pp_op_lt_15_1__() 0
#define __pp_op_eq_15_1__() 0
#define __pp_op_gt_15_1__() 1
#define __pp_op_lt_1_15__() 1
#define __pp_op_eq_1_15__() 0
#define __pp_op_gt_1_15__() 0
#endif

#else

#error "cmp 'pp_op' 15 and 1 failed. '__pp_op_15__()' or '__pp_op_1__()' not defined"

#endif
