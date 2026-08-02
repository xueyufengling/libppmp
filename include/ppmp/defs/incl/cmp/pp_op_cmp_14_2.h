#if defined(__pp_op_14__) && defined(__pp_op_2__)

#undef __pp_op_lt_14_2__
#undef __pp_op_eq_14_2__
#undef __pp_op_gt_14_2__
#undef __pp_op_lt_2_14__
#undef __pp_op_eq_2_14__
#undef __pp_op_gt_2_14__

#if (__pp_op_14__()) < (__pp_op_2__())
#define __pp_op_lt_14_2__() 1
#define __pp_op_eq_14_2__() 0
#define __pp_op_gt_14_2__() 0
#define __pp_op_lt_2_14__() 0
#define __pp_op_eq_2_14__() 0
#define __pp_op_gt_2_14__() 1
#elif (__pp_op_14__()) == (__pp_op_2__())
#define __pp_op_lt_14_2__() 0
#define __pp_op_eq_14_2__() 1
#define __pp_op_gt_14_2__() 0
#define __pp_op_lt_2_14__() 0
#define __pp_op_eq_2_14__() 1
#define __pp_op_gt_2_14__() 0
#elif (__pp_op_14__()) > (__pp_op_2__())
#define __pp_op_lt_14_2__() 0
#define __pp_op_eq_14_2__() 0
#define __pp_op_gt_14_2__() 1
#define __pp_op_lt_2_14__() 1
#define __pp_op_eq_2_14__() 0
#define __pp_op_gt_2_14__() 0
#endif

#else

#error "cmp op 14 and op 2 failed. '__pp_op_14__' or '__pp_op_2__' not defined"

#endif
