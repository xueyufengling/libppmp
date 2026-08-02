#if defined(__pp_op_15__) && defined(__pp_op_12__)

#undef __pp_op_lt_15_12__
#undef __pp_op_eq_15_12__
#undef __pp_op_gt_15_12__
#undef __pp_op_lt_12_15__
#undef __pp_op_eq_12_15__
#undef __pp_op_gt_12_15__

#if (__pp_op_15__()) < (__pp_op_12__())
#define __pp_op_lt_15_12__() 1
#define __pp_op_eq_15_12__() 0
#define __pp_op_gt_15_12__() 0
#define __pp_op_lt_12_15__() 0
#define __pp_op_eq_12_15__() 0
#define __pp_op_gt_12_15__() 1
#elif (__pp_op_15__()) == (__pp_op_12__())
#define __pp_op_lt_15_12__() 0
#define __pp_op_eq_15_12__() 1
#define __pp_op_gt_15_12__() 0
#define __pp_op_lt_12_15__() 0
#define __pp_op_eq_12_15__() 1
#define __pp_op_gt_12_15__() 0
#elif (__pp_op_15__()) > (__pp_op_12__())
#define __pp_op_lt_15_12__() 0
#define __pp_op_eq_15_12__() 0
#define __pp_op_gt_15_12__() 1
#define __pp_op_lt_12_15__() 1
#define __pp_op_eq_12_15__() 0
#define __pp_op_gt_12_15__() 0
#endif

#else

#error "cmp op 15 and op 12 failed. '__pp_op_15__' or '__pp_op_12__' not defined"

#endif
