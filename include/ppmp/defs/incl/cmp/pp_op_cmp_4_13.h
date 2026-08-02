#if defined(__pp_op_4__) && defined(__pp_op_13__)

#undef __pp_op_lt_4_13__
#undef __pp_op_eq_4_13__
#undef __pp_op_gt_4_13__
#undef __pp_op_lt_13_4__
#undef __pp_op_eq_13_4__
#undef __pp_op_gt_13_4__

#if (__pp_op_4__()) < (__pp_op_13__())
#define __pp_op_lt_4_13__() 1
#define __pp_op_eq_4_13__() 0
#define __pp_op_gt_4_13__() 0
#define __pp_op_lt_13_4__() 0
#define __pp_op_eq_13_4__() 0
#define __pp_op_gt_13_4__() 1
#elif (__pp_op_4__()) == (__pp_op_13__())
#define __pp_op_lt_4_13__() 0
#define __pp_op_eq_4_13__() 1
#define __pp_op_gt_4_13__() 0
#define __pp_op_lt_13_4__() 0
#define __pp_op_eq_13_4__() 1
#define __pp_op_gt_13_4__() 0
#elif (__pp_op_4__()) > (__pp_op_13__())
#define __pp_op_lt_4_13__() 0
#define __pp_op_eq_4_13__() 0
#define __pp_op_gt_4_13__() 1
#define __pp_op_lt_13_4__() 1
#define __pp_op_eq_13_4__() 0
#define __pp_op_gt_13_4__() 0
#endif

#else

#error "cmp op 4 and op 13 failed. '__pp_op_4__' or '__pp_op_13__' not defined"

#endif
