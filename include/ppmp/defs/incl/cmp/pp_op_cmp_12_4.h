#if defined(__pp_op_12__) && defined(__pp_op_4__)

#undef __pp_op_lt_12_4__
#undef __pp_op_eq_12_4__
#undef __pp_op_gt_12_4__
#undef __pp_op_lt_4_12__
#undef __pp_op_eq_4_12__
#undef __pp_op_gt_4_12__

#if (__pp_op_12__()) < (__pp_op_4__())
#define __pp_op_lt_12_4__() 1
#define __pp_op_eq_12_4__() 0
#define __pp_op_gt_12_4__() 0
#define __pp_op_lt_4_12__() 0
#define __pp_op_eq_4_12__() 0
#define __pp_op_gt_4_12__() 1
#elif (__pp_op_12__()) == (__pp_op_4__())
#define __pp_op_lt_12_4__() 0
#define __pp_op_eq_12_4__() 1
#define __pp_op_gt_12_4__() 0
#define __pp_op_lt_4_12__() 0
#define __pp_op_eq_4_12__() 1
#define __pp_op_gt_4_12__() 0
#elif (__pp_op_12__()) > (__pp_op_4__())
#define __pp_op_lt_12_4__() 0
#define __pp_op_eq_12_4__() 0
#define __pp_op_gt_12_4__() 1
#define __pp_op_lt_4_12__() 1
#define __pp_op_eq_4_12__() 0
#define __pp_op_gt_4_12__() 0
#endif

#else

#error "cmp op 12 and op 4 failed. '__pp_op_12__' or '__pp_op_4__' not defined"

#endif
