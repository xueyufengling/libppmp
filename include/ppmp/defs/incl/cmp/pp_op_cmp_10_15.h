#if defined(__pp_op_10__) && defined(__pp_op_15__)

#undef __pp_op_lt_10_15__
#undef __pp_op_eq_10_15__
#undef __pp_op_gt_10_15__
#undef __pp_op_lt_15_10__
#undef __pp_op_eq_15_10__
#undef __pp_op_gt_15_10__

#if (__pp_op_10__()) < (__pp_op_15__())
#define __pp_op_lt_10_15__() 1
#define __pp_op_eq_10_15__() 0
#define __pp_op_gt_10_15__() 0
#define __pp_op_lt_15_10__() 0
#define __pp_op_eq_15_10__() 0
#define __pp_op_gt_15_10__() 1
#elif (__pp_op_10__()) == (__pp_op_15__())
#define __pp_op_lt_10_15__() 0
#define __pp_op_eq_10_15__() 1
#define __pp_op_gt_10_15__() 0
#define __pp_op_lt_15_10__() 0
#define __pp_op_eq_15_10__() 1
#define __pp_op_gt_15_10__() 0
#elif (__pp_op_10__()) > (__pp_op_15__())
#define __pp_op_lt_10_15__() 0
#define __pp_op_eq_10_15__() 0
#define __pp_op_gt_10_15__() 1
#define __pp_op_lt_15_10__() 1
#define __pp_op_eq_15_10__() 0
#define __pp_op_gt_15_10__() 0
#endif

#else

#error "cmp op 10 and op 15 failed. '__pp_op_10__' or '__pp_op_15__' not defined"

#endif
