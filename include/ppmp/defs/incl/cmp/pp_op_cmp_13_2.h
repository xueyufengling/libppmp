#if defined(__pp_op_13__) && defined(__pp_op_2__)

#undef __pp_op_lt_13_2__
#undef __pp_op_eq_13_2__
#undef __pp_op_gt_13_2__
#undef __pp_op_lt_2_13__
#undef __pp_op_eq_2_13__
#undef __pp_op_gt_2_13__

#if (__pp_op_13__()) < (__pp_op_2__())
#define __pp_op_lt_13_2__() 1
#define __pp_op_eq_13_2__() 0
#define __pp_op_gt_13_2__() 0
#define __pp_op_lt_2_13__() 0
#define __pp_op_eq_2_13__() 0
#define __pp_op_gt_2_13__() 1
#elif (__pp_op_13__()) == (__pp_op_2__())
#define __pp_op_lt_13_2__() 0
#define __pp_op_eq_13_2__() 1
#define __pp_op_gt_13_2__() 0
#define __pp_op_lt_2_13__() 0
#define __pp_op_eq_2_13__() 1
#define __pp_op_gt_2_13__() 0
#elif (__pp_op_13__()) > (__pp_op_2__())
#define __pp_op_lt_13_2__() 0
#define __pp_op_eq_13_2__() 0
#define __pp_op_gt_13_2__() 1
#define __pp_op_lt_2_13__() 1
#define __pp_op_eq_2_13__() 0
#define __pp_op_gt_2_13__() 0
#endif

#else

#error "cmp op 13 and op 2 failed. '__pp_op_13__' or '__pp_op_2__' not defined"

#endif
