#if defined(__pp_op_4__) && defined(__pp_op_11__)

#undef __pp_op_lt_4_11__
#undef __pp_op_eq_4_11__
#undef __pp_op_gt_4_11__
#undef __pp_op_lt_11_4__
#undef __pp_op_eq_11_4__
#undef __pp_op_gt_11_4__

#if (__pp_op_4__()) < (__pp_op_11__())
#define __pp_op_lt_4_11__() 1
#define __pp_op_eq_4_11__() 0
#define __pp_op_gt_4_11__() 0
#define __pp_op_lt_11_4__() 0
#define __pp_op_eq_11_4__() 0
#define __pp_op_gt_11_4__() 1
#elif (__pp_op_4__()) == (__pp_op_11__())
#define __pp_op_lt_4_11__() 0
#define __pp_op_eq_4_11__() 1
#define __pp_op_gt_4_11__() 0
#define __pp_op_lt_11_4__() 0
#define __pp_op_eq_11_4__() 1
#define __pp_op_gt_11_4__() 0
#elif (__pp_op_4__()) > (__pp_op_11__())
#define __pp_op_lt_4_11__() 0
#define __pp_op_eq_4_11__() 0
#define __pp_op_gt_4_11__() 1
#define __pp_op_lt_11_4__() 1
#define __pp_op_eq_11_4__() 0
#define __pp_op_gt_11_4__() 0
#endif

#else

#error "cmp op 4 and op 11 failed. '__pp_op_4__' or '__pp_op_11__' not defined"

#endif
