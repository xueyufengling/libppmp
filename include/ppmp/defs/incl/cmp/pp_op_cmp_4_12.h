#if defined(__pp_op_4__) && defined(__pp_op_12__)

#undef __pp_op_lt_4_12__
#undef __pp_op_eq_4_12__
#undef __pp_op_gt_4_12__
#undef __pp_op_lt_12_4__
#undef __pp_op_eq_12_4__
#undef __pp_op_gt_12_4__

#if (__pp_op_4__()) < (__pp_op_12__())
#define __pp_op_lt_4_12__() 1
#define __pp_op_eq_4_12__() 0
#define __pp_op_gt_4_12__() 0
#define __pp_op_lt_12_4__() 0
#define __pp_op_eq_12_4__() 0
#define __pp_op_gt_12_4__() 1
#elif (__pp_op_4__()) == (__pp_op_12__())
#define __pp_op_lt_4_12__() 0
#define __pp_op_eq_4_12__() 1
#define __pp_op_gt_4_12__() 0
#define __pp_op_lt_12_4__() 0
#define __pp_op_eq_12_4__() 1
#define __pp_op_gt_12_4__() 0
#elif (__pp_op_4__()) > (__pp_op_12__())
#define __pp_op_lt_4_12__() 0
#define __pp_op_eq_4_12__() 0
#define __pp_op_gt_4_12__() 1
#define __pp_op_lt_12_4__() 1
#define __pp_op_eq_12_4__() 0
#define __pp_op_gt_12_4__() 0
#endif

#else

#error "cmp 'pp_op' 4 and 12 failed. '__pp_op_4__()' or '__pp_op_12__()' not defined"

#endif
