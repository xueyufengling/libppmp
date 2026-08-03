#if defined(__pp_op_1__) && defined(__pp_op_15__)

#undef __pp_op_lt_1_15__
#undef __pp_op_eq_1_15__
#undef __pp_op_gt_1_15__
#undef __pp_op_lt_15_1__
#undef __pp_op_eq_15_1__
#undef __pp_op_gt_15_1__

#if (__pp_op_1__()) < (__pp_op_15__())
#define __pp_op_lt_1_15__() 1
#define __pp_op_eq_1_15__() 0
#define __pp_op_gt_1_15__() 0
#define __pp_op_lt_15_1__() 0
#define __pp_op_eq_15_1__() 0
#define __pp_op_gt_15_1__() 1
#elif (__pp_op_1__()) == (__pp_op_15__())
#define __pp_op_lt_1_15__() 0
#define __pp_op_eq_1_15__() 1
#define __pp_op_gt_1_15__() 0
#define __pp_op_lt_15_1__() 0
#define __pp_op_eq_15_1__() 1
#define __pp_op_gt_15_1__() 0
#elif (__pp_op_1__()) > (__pp_op_15__())
#define __pp_op_lt_1_15__() 0
#define __pp_op_eq_1_15__() 0
#define __pp_op_gt_1_15__() 1
#define __pp_op_lt_15_1__() 1
#define __pp_op_eq_15_1__() 0
#define __pp_op_gt_15_1__() 0
#endif

#else

#error "cmp 'pp_op' 1 and 15 failed. '__pp_op_1__()' or '__pp_op_15__()' not defined"

#endif
