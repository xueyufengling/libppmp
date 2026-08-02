#if defined(__pp_op_13__) && defined(__pp_op_15__)

#undef __pp_op_lt_13_15__
#undef __pp_op_eq_13_15__
#undef __pp_op_gt_13_15__
#undef __pp_op_lt_15_13__
#undef __pp_op_eq_15_13__
#undef __pp_op_gt_15_13__

#if (__pp_op_13__()) < (__pp_op_15__())
#define __pp_op_lt_13_15__() 1
#define __pp_op_eq_13_15__() 0
#define __pp_op_gt_13_15__() 0
#define __pp_op_lt_15_13__() 0
#define __pp_op_eq_15_13__() 0
#define __pp_op_gt_15_13__() 1
#elif (__pp_op_13__()) == (__pp_op_15__())
#define __pp_op_lt_13_15__() 0
#define __pp_op_eq_13_15__() 1
#define __pp_op_gt_13_15__() 0
#define __pp_op_lt_15_13__() 0
#define __pp_op_eq_15_13__() 1
#define __pp_op_gt_15_13__() 0
#elif (__pp_op_13__()) > (__pp_op_15__())
#define __pp_op_lt_13_15__() 0
#define __pp_op_eq_13_15__() 0
#define __pp_op_gt_13_15__() 1
#define __pp_op_lt_15_13__() 1
#define __pp_op_eq_15_13__() 0
#define __pp_op_gt_15_13__() 0
#endif

#else

#error "cmp op 13 and op 15 failed. '__pp_op_13__' or '__pp_op_15__' not defined"

#endif
