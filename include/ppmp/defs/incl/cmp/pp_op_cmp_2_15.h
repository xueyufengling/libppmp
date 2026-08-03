#if defined(__pp_op_2__) && defined(__pp_op_15__)

#undef __pp_op_lt_2_15__
#undef __pp_op_eq_2_15__
#undef __pp_op_gt_2_15__
#undef __pp_op_lt_15_2__
#undef __pp_op_eq_15_2__
#undef __pp_op_gt_15_2__

#if (__pp_op_2__()) < (__pp_op_15__())
#define __pp_op_lt_2_15__() 1
#define __pp_op_eq_2_15__() 0
#define __pp_op_gt_2_15__() 0
#define __pp_op_lt_15_2__() 0
#define __pp_op_eq_15_2__() 0
#define __pp_op_gt_15_2__() 1
#elif (__pp_op_2__()) == (__pp_op_15__())
#define __pp_op_lt_2_15__() 0
#define __pp_op_eq_2_15__() 1
#define __pp_op_gt_2_15__() 0
#define __pp_op_lt_15_2__() 0
#define __pp_op_eq_15_2__() 1
#define __pp_op_gt_15_2__() 0
#elif (__pp_op_2__()) > (__pp_op_15__())
#define __pp_op_lt_2_15__() 0
#define __pp_op_eq_2_15__() 0
#define __pp_op_gt_2_15__() 1
#define __pp_op_lt_15_2__() 1
#define __pp_op_eq_15_2__() 0
#define __pp_op_gt_15_2__() 0
#endif

#else

#error "cmp 'pp_op' 2 and 15 failed. '__pp_op_2__()' or '__pp_op_15__()' not defined"

#endif
