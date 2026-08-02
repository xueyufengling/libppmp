#if defined(__pp_op_7__) && defined(__pp_op_15__)

#undef __pp_op_lt_7_15__
#undef __pp_op_eq_7_15__
#undef __pp_op_gt_7_15__
#undef __pp_op_lt_15_7__
#undef __pp_op_eq_15_7__
#undef __pp_op_gt_15_7__

#if (__pp_op_7__()) < (__pp_op_15__())
#define __pp_op_lt_7_15__() 1
#define __pp_op_eq_7_15__() 0
#define __pp_op_gt_7_15__() 0
#define __pp_op_lt_15_7__() 0
#define __pp_op_eq_15_7__() 0
#define __pp_op_gt_15_7__() 1
#elif (__pp_op_7__()) == (__pp_op_15__())
#define __pp_op_lt_7_15__() 0
#define __pp_op_eq_7_15__() 1
#define __pp_op_gt_7_15__() 0
#define __pp_op_lt_15_7__() 0
#define __pp_op_eq_15_7__() 1
#define __pp_op_gt_15_7__() 0
#elif (__pp_op_7__()) > (__pp_op_15__())
#define __pp_op_lt_7_15__() 0
#define __pp_op_eq_7_15__() 0
#define __pp_op_gt_7_15__() 1
#define __pp_op_lt_15_7__() 1
#define __pp_op_eq_15_7__() 0
#define __pp_op_gt_15_7__() 0
#endif

#else

#error "cmp op 7 and op 15 failed. '__pp_op_7__' or '__pp_op_15__' not defined"

#endif
