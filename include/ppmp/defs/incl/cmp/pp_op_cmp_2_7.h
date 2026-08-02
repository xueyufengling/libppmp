#if defined(__pp_op_2__) && defined(__pp_op_7__)

#undef __pp_op_lt_2_7__
#undef __pp_op_eq_2_7__
#undef __pp_op_gt_2_7__
#undef __pp_op_lt_7_2__
#undef __pp_op_eq_7_2__
#undef __pp_op_gt_7_2__

#if (__pp_op_2__()) < (__pp_op_7__())
#define __pp_op_lt_2_7__() 1
#define __pp_op_eq_2_7__() 0
#define __pp_op_gt_2_7__() 0
#define __pp_op_lt_7_2__() 0
#define __pp_op_eq_7_2__() 0
#define __pp_op_gt_7_2__() 1
#elif (__pp_op_2__()) == (__pp_op_7__())
#define __pp_op_lt_2_7__() 0
#define __pp_op_eq_2_7__() 1
#define __pp_op_gt_2_7__() 0
#define __pp_op_lt_7_2__() 0
#define __pp_op_eq_7_2__() 1
#define __pp_op_gt_7_2__() 0
#elif (__pp_op_2__()) > (__pp_op_7__())
#define __pp_op_lt_2_7__() 0
#define __pp_op_eq_2_7__() 0
#define __pp_op_gt_2_7__() 1
#define __pp_op_lt_7_2__() 1
#define __pp_op_eq_7_2__() 0
#define __pp_op_gt_7_2__() 0
#endif

#else

#error "cmp op 2 and op 7 failed. '__pp_op_2__' or '__pp_op_7__' not defined"

#endif
