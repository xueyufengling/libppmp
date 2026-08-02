#if defined(__pp_op_7__) && defined(__pp_op_13__)

#undef __pp_op_lt_7_13__
#undef __pp_op_eq_7_13__
#undef __pp_op_gt_7_13__
#undef __pp_op_lt_13_7__
#undef __pp_op_eq_13_7__
#undef __pp_op_gt_13_7__

#if (__pp_op_7__()) < (__pp_op_13__())
#define __pp_op_lt_7_13__() 1
#define __pp_op_eq_7_13__() 0
#define __pp_op_gt_7_13__() 0
#define __pp_op_lt_13_7__() 0
#define __pp_op_eq_13_7__() 0
#define __pp_op_gt_13_7__() 1
#elif (__pp_op_7__()) == (__pp_op_13__())
#define __pp_op_lt_7_13__() 0
#define __pp_op_eq_7_13__() 1
#define __pp_op_gt_7_13__() 0
#define __pp_op_lt_13_7__() 0
#define __pp_op_eq_13_7__() 1
#define __pp_op_gt_13_7__() 0
#elif (__pp_op_7__()) > (__pp_op_13__())
#define __pp_op_lt_7_13__() 0
#define __pp_op_eq_7_13__() 0
#define __pp_op_gt_7_13__() 1
#define __pp_op_lt_13_7__() 1
#define __pp_op_eq_13_7__() 0
#define __pp_op_gt_13_7__() 0
#endif

#else

#error "cmp op 7 and op 13 failed. '__pp_op_7__' or '__pp_op_13__' not defined"

#endif
