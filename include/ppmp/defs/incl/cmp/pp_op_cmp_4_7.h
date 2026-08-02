#if defined(__pp_op_4__) && defined(__pp_op_7__)

#undef __pp_op_lt_4_7__
#undef __pp_op_eq_4_7__
#undef __pp_op_gt_4_7__
#undef __pp_op_lt_7_4__
#undef __pp_op_eq_7_4__
#undef __pp_op_gt_7_4__

#if (__pp_op_4__()) < (__pp_op_7__())
#define __pp_op_lt_4_7__() 1
#define __pp_op_eq_4_7__() 0
#define __pp_op_gt_4_7__() 0
#define __pp_op_lt_7_4__() 0
#define __pp_op_eq_7_4__() 0
#define __pp_op_gt_7_4__() 1
#elif (__pp_op_4__()) == (__pp_op_7__())
#define __pp_op_lt_4_7__() 0
#define __pp_op_eq_4_7__() 1
#define __pp_op_gt_4_7__() 0
#define __pp_op_lt_7_4__() 0
#define __pp_op_eq_7_4__() 1
#define __pp_op_gt_7_4__() 0
#elif (__pp_op_4__()) > (__pp_op_7__())
#define __pp_op_lt_4_7__() 0
#define __pp_op_eq_4_7__() 0
#define __pp_op_gt_4_7__() 1
#define __pp_op_lt_7_4__() 1
#define __pp_op_eq_7_4__() 0
#define __pp_op_gt_7_4__() 0
#endif

#else

#error "cmp op 4 and op 7 failed. '__pp_op_4__' or '__pp_op_7__' not defined"

#endif
