#if defined(__pp_op_6__) && defined(__pp_op_15__)

#undef __pp_op_lt_6_15__
#undef __pp_op_eq_6_15__
#undef __pp_op_gt_6_15__
#undef __pp_op_lt_15_6__
#undef __pp_op_eq_15_6__
#undef __pp_op_gt_15_6__

#if (__pp_op_6__()) < (__pp_op_15__())
#define __pp_op_lt_6_15__() 1
#define __pp_op_eq_6_15__() 0
#define __pp_op_gt_6_15__() 0
#define __pp_op_lt_15_6__() 0
#define __pp_op_eq_15_6__() 0
#define __pp_op_gt_15_6__() 1
#elif (__pp_op_6__()) == (__pp_op_15__())
#define __pp_op_lt_6_15__() 0
#define __pp_op_eq_6_15__() 1
#define __pp_op_gt_6_15__() 0
#define __pp_op_lt_15_6__() 0
#define __pp_op_eq_15_6__() 1
#define __pp_op_gt_15_6__() 0
#elif (__pp_op_6__()) > (__pp_op_15__())
#define __pp_op_lt_6_15__() 0
#define __pp_op_eq_6_15__() 0
#define __pp_op_gt_6_15__() 1
#define __pp_op_lt_15_6__() 1
#define __pp_op_eq_15_6__() 0
#define __pp_op_gt_15_6__() 0
#endif

#else

#error "cmp op 6 and op 15 failed. '__pp_op_6__' or '__pp_op_15__' not defined"

#endif
