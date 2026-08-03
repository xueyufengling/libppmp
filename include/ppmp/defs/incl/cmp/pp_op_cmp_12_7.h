#if defined(__pp_op_12__) && defined(__pp_op_7__)

#undef __pp_op_lt_12_7__
#undef __pp_op_eq_12_7__
#undef __pp_op_gt_12_7__
#undef __pp_op_lt_7_12__
#undef __pp_op_eq_7_12__
#undef __pp_op_gt_7_12__

#if (__pp_op_12__()) < (__pp_op_7__())
#define __pp_op_lt_12_7__() 1
#define __pp_op_eq_12_7__() 0
#define __pp_op_gt_12_7__() 0
#define __pp_op_lt_7_12__() 0
#define __pp_op_eq_7_12__() 0
#define __pp_op_gt_7_12__() 1
#elif (__pp_op_12__()) == (__pp_op_7__())
#define __pp_op_lt_12_7__() 0
#define __pp_op_eq_12_7__() 1
#define __pp_op_gt_12_7__() 0
#define __pp_op_lt_7_12__() 0
#define __pp_op_eq_7_12__() 1
#define __pp_op_gt_7_12__() 0
#elif (__pp_op_12__()) > (__pp_op_7__())
#define __pp_op_lt_12_7__() 0
#define __pp_op_eq_12_7__() 0
#define __pp_op_gt_12_7__() 1
#define __pp_op_lt_7_12__() 1
#define __pp_op_eq_7_12__() 0
#define __pp_op_gt_7_12__() 0
#endif

#else

#error "cmp 'pp_op' 12 and 7 failed. '__pp_op_12__()' or '__pp_op_7__()' not defined"

#endif
