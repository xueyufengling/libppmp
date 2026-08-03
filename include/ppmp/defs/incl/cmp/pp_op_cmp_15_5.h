#if defined(__pp_op_15__) && defined(__pp_op_5__)

#undef __pp_op_lt_15_5__
#undef __pp_op_eq_15_5__
#undef __pp_op_gt_15_5__
#undef __pp_op_lt_5_15__
#undef __pp_op_eq_5_15__
#undef __pp_op_gt_5_15__

#if (__pp_op_15__()) < (__pp_op_5__())
#define __pp_op_lt_15_5__() 1
#define __pp_op_eq_15_5__() 0
#define __pp_op_gt_15_5__() 0
#define __pp_op_lt_5_15__() 0
#define __pp_op_eq_5_15__() 0
#define __pp_op_gt_5_15__() 1
#elif (__pp_op_15__()) == (__pp_op_5__())
#define __pp_op_lt_15_5__() 0
#define __pp_op_eq_15_5__() 1
#define __pp_op_gt_15_5__() 0
#define __pp_op_lt_5_15__() 0
#define __pp_op_eq_5_15__() 1
#define __pp_op_gt_5_15__() 0
#elif (__pp_op_15__()) > (__pp_op_5__())
#define __pp_op_lt_15_5__() 0
#define __pp_op_eq_15_5__() 0
#define __pp_op_gt_15_5__() 1
#define __pp_op_lt_5_15__() 1
#define __pp_op_eq_5_15__() 0
#define __pp_op_gt_5_15__() 0
#endif

#else

#error "cmp 'pp_op' 15 and 5 failed. '__pp_op_15__()' or '__pp_op_5__()' not defined"

#endif
