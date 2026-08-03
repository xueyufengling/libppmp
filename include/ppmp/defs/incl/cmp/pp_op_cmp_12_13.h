#if defined(__pp_op_12__) && defined(__pp_op_13__)

#undef __pp_op_lt_12_13__
#undef __pp_op_eq_12_13__
#undef __pp_op_gt_12_13__
#undef __pp_op_lt_13_12__
#undef __pp_op_eq_13_12__
#undef __pp_op_gt_13_12__

#if (__pp_op_12__()) < (__pp_op_13__())
#define __pp_op_lt_12_13__() 1
#define __pp_op_eq_12_13__() 0
#define __pp_op_gt_12_13__() 0
#define __pp_op_lt_13_12__() 0
#define __pp_op_eq_13_12__() 0
#define __pp_op_gt_13_12__() 1
#elif (__pp_op_12__()) == (__pp_op_13__())
#define __pp_op_lt_12_13__() 0
#define __pp_op_eq_12_13__() 1
#define __pp_op_gt_12_13__() 0
#define __pp_op_lt_13_12__() 0
#define __pp_op_eq_13_12__() 1
#define __pp_op_gt_13_12__() 0
#elif (__pp_op_12__()) > (__pp_op_13__())
#define __pp_op_lt_12_13__() 0
#define __pp_op_eq_12_13__() 0
#define __pp_op_gt_12_13__() 1
#define __pp_op_lt_13_12__() 1
#define __pp_op_eq_13_12__() 0
#define __pp_op_gt_13_12__() 0
#endif

#else

#error "cmp 'pp_op' 12 and 13 failed. '__pp_op_12__()' or '__pp_op_13__()' not defined"

#endif
