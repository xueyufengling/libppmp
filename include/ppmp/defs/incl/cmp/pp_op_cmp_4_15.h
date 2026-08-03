#if defined(__pp_op_4__) && defined(__pp_op_15__)

#undef __pp_op_lt_4_15__
#undef __pp_op_eq_4_15__
#undef __pp_op_gt_4_15__
#undef __pp_op_lt_15_4__
#undef __pp_op_eq_15_4__
#undef __pp_op_gt_15_4__

#if (__pp_op_4__()) < (__pp_op_15__())
#define __pp_op_lt_4_15__() 1
#define __pp_op_eq_4_15__() 0
#define __pp_op_gt_4_15__() 0
#define __pp_op_lt_15_4__() 0
#define __pp_op_eq_15_4__() 0
#define __pp_op_gt_15_4__() 1
#elif (__pp_op_4__()) == (__pp_op_15__())
#define __pp_op_lt_4_15__() 0
#define __pp_op_eq_4_15__() 1
#define __pp_op_gt_4_15__() 0
#define __pp_op_lt_15_4__() 0
#define __pp_op_eq_15_4__() 1
#define __pp_op_gt_15_4__() 0
#elif (__pp_op_4__()) > (__pp_op_15__())
#define __pp_op_lt_4_15__() 0
#define __pp_op_eq_4_15__() 0
#define __pp_op_gt_4_15__() 1
#define __pp_op_lt_15_4__() 1
#define __pp_op_eq_15_4__() 0
#define __pp_op_gt_15_4__() 0
#endif

#else

#error "cmp 'pp_op' 4 and 15 failed. '__pp_op_4__()' or '__pp_op_15__()' not defined"

#endif
