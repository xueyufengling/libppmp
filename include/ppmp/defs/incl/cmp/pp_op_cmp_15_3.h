#if defined(__pp_op_15__) && defined(__pp_op_3__)

#undef __pp_op_lt_15_3__
#undef __pp_op_eq_15_3__
#undef __pp_op_gt_15_3__
#undef __pp_op_lt_3_15__
#undef __pp_op_eq_3_15__
#undef __pp_op_gt_3_15__

#if (__pp_op_15__()) < (__pp_op_3__())
#define __pp_op_lt_15_3__() 1
#define __pp_op_eq_15_3__() 0
#define __pp_op_gt_15_3__() 0
#define __pp_op_lt_3_15__() 0
#define __pp_op_eq_3_15__() 0
#define __pp_op_gt_3_15__() 1
#elif (__pp_op_15__()) == (__pp_op_3__())
#define __pp_op_lt_15_3__() 0
#define __pp_op_eq_15_3__() 1
#define __pp_op_gt_15_3__() 0
#define __pp_op_lt_3_15__() 0
#define __pp_op_eq_3_15__() 1
#define __pp_op_gt_3_15__() 0
#elif (__pp_op_15__()) > (__pp_op_3__())
#define __pp_op_lt_15_3__() 0
#define __pp_op_eq_15_3__() 0
#define __pp_op_gt_15_3__() 1
#define __pp_op_lt_3_15__() 1
#define __pp_op_eq_3_15__() 0
#define __pp_op_gt_3_15__() 0
#endif

#else

#error "cmp 'pp_op' 15 and 3 failed. '__pp_op_15__()' or '__pp_op_3__()' not defined"

#endif
