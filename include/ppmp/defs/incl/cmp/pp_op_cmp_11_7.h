#if defined(__pp_op_11__) && defined(__pp_op_7__)

#undef __pp_op_lt_11_7__
#undef __pp_op_eq_11_7__
#undef __pp_op_gt_11_7__
#undef __pp_op_lt_7_11__
#undef __pp_op_eq_7_11__
#undef __pp_op_gt_7_11__

#if (__pp_op_11__()) < (__pp_op_7__())
#define __pp_op_lt_11_7__() 1
#define __pp_op_eq_11_7__() 0
#define __pp_op_gt_11_7__() 0
#define __pp_op_lt_7_11__() 0
#define __pp_op_eq_7_11__() 0
#define __pp_op_gt_7_11__() 1
#elif (__pp_op_11__()) == (__pp_op_7__())
#define __pp_op_lt_11_7__() 0
#define __pp_op_eq_11_7__() 1
#define __pp_op_gt_11_7__() 0
#define __pp_op_lt_7_11__() 0
#define __pp_op_eq_7_11__() 1
#define __pp_op_gt_7_11__() 0
#elif (__pp_op_11__()) > (__pp_op_7__())
#define __pp_op_lt_11_7__() 0
#define __pp_op_eq_11_7__() 0
#define __pp_op_gt_11_7__() 1
#define __pp_op_lt_7_11__() 1
#define __pp_op_eq_7_11__() 0
#define __pp_op_gt_7_11__() 0
#endif

#else

#error "cmp op 11 and op 7 failed. '__pp_op_11__' or '__pp_op_7__' not defined"

#endif
