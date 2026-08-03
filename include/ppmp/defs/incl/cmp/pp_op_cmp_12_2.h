#if defined(__pp_op_12__) && defined(__pp_op_2__)

#undef __pp_op_lt_12_2__
#undef __pp_op_eq_12_2__
#undef __pp_op_gt_12_2__
#undef __pp_op_lt_2_12__
#undef __pp_op_eq_2_12__
#undef __pp_op_gt_2_12__

#if (__pp_op_12__()) < (__pp_op_2__())
#define __pp_op_lt_12_2__() 1
#define __pp_op_eq_12_2__() 0
#define __pp_op_gt_12_2__() 0
#define __pp_op_lt_2_12__() 0
#define __pp_op_eq_2_12__() 0
#define __pp_op_gt_2_12__() 1
#elif (__pp_op_12__()) == (__pp_op_2__())
#define __pp_op_lt_12_2__() 0
#define __pp_op_eq_12_2__() 1
#define __pp_op_gt_12_2__() 0
#define __pp_op_lt_2_12__() 0
#define __pp_op_eq_2_12__() 1
#define __pp_op_gt_2_12__() 0
#elif (__pp_op_12__()) > (__pp_op_2__())
#define __pp_op_lt_12_2__() 0
#define __pp_op_eq_12_2__() 0
#define __pp_op_gt_12_2__() 1
#define __pp_op_lt_2_12__() 1
#define __pp_op_eq_2_12__() 0
#define __pp_op_gt_2_12__() 0
#endif

#else

#error "cmp 'pp_op' 12 and 2 failed. '__pp_op_12__()' or '__pp_op_2__()' not defined"

#endif
