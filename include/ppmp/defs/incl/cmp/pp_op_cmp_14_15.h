#if defined(__pp_op_14__) && defined(__pp_op_15__)

#undef __pp_op_lt_14_15__
#undef __pp_op_eq_14_15__
#undef __pp_op_gt_14_15__
#undef __pp_op_lt_15_14__
#undef __pp_op_eq_15_14__
#undef __pp_op_gt_15_14__

#if (__pp_op_14__()) < (__pp_op_15__())
#define __pp_op_lt_14_15__() 1
#define __pp_op_eq_14_15__() 0
#define __pp_op_gt_14_15__() 0
#define __pp_op_lt_15_14__() 0
#define __pp_op_eq_15_14__() 0
#define __pp_op_gt_15_14__() 1
#elif (__pp_op_14__()) == (__pp_op_15__())
#define __pp_op_lt_14_15__() 0
#define __pp_op_eq_14_15__() 1
#define __pp_op_gt_14_15__() 0
#define __pp_op_lt_15_14__() 0
#define __pp_op_eq_15_14__() 1
#define __pp_op_gt_15_14__() 0
#elif (__pp_op_14__()) > (__pp_op_15__())
#define __pp_op_lt_14_15__() 0
#define __pp_op_eq_14_15__() 0
#define __pp_op_gt_14_15__() 1
#define __pp_op_lt_15_14__() 1
#define __pp_op_eq_15_14__() 0
#define __pp_op_gt_15_14__() 0
#endif

#else

#error "cmp 'pp_op' 14 and 15 failed. '__pp_op_14__()' or '__pp_op_15__()' not defined"

#endif
