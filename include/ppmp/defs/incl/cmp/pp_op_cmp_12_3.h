#if defined(__pp_op_12__) && defined(__pp_op_3__)

#undef __pp_op_lt_12_3__
#undef __pp_op_eq_12_3__
#undef __pp_op_gt_12_3__
#undef __pp_op_lt_3_12__
#undef __pp_op_eq_3_12__
#undef __pp_op_gt_3_12__

#if (__pp_op_12__()) < (__pp_op_3__())
#define __pp_op_lt_12_3__() 1
#define __pp_op_eq_12_3__() 0
#define __pp_op_gt_12_3__() 0
#define __pp_op_lt_3_12__() 0
#define __pp_op_eq_3_12__() 0
#define __pp_op_gt_3_12__() 1
#elif (__pp_op_12__()) == (__pp_op_3__())
#define __pp_op_lt_12_3__() 0
#define __pp_op_eq_12_3__() 1
#define __pp_op_gt_12_3__() 0
#define __pp_op_lt_3_12__() 0
#define __pp_op_eq_3_12__() 1
#define __pp_op_gt_3_12__() 0
#elif (__pp_op_12__()) > (__pp_op_3__())
#define __pp_op_lt_12_3__() 0
#define __pp_op_eq_12_3__() 0
#define __pp_op_gt_12_3__() 1
#define __pp_op_lt_3_12__() 1
#define __pp_op_eq_3_12__() 0
#define __pp_op_gt_3_12__() 0
#endif

#else

#error "cmp op 12 and op 3 failed. '__pp_op_12__' or '__pp_op_3__' not defined"

#endif
