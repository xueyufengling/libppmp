#if defined(__pp_op_11__) && defined(__pp_op_14__)

#undef __pp_op_lt_11_14__
#undef __pp_op_eq_11_14__
#undef __pp_op_gt_11_14__
#undef __pp_op_lt_14_11__
#undef __pp_op_eq_14_11__
#undef __pp_op_gt_14_11__

#if (__pp_op_11__()) < (__pp_op_14__())
#define __pp_op_lt_11_14__() 1
#define __pp_op_eq_11_14__() 0
#define __pp_op_gt_11_14__() 0
#define __pp_op_lt_14_11__() 0
#define __pp_op_eq_14_11__() 0
#define __pp_op_gt_14_11__() 1
#elif (__pp_op_11__()) == (__pp_op_14__())
#define __pp_op_lt_11_14__() 0
#define __pp_op_eq_11_14__() 1
#define __pp_op_gt_11_14__() 0
#define __pp_op_lt_14_11__() 0
#define __pp_op_eq_14_11__() 1
#define __pp_op_gt_14_11__() 0
#elif (__pp_op_11__()) > (__pp_op_14__())
#define __pp_op_lt_11_14__() 0
#define __pp_op_eq_11_14__() 0
#define __pp_op_gt_11_14__() 1
#define __pp_op_lt_14_11__() 1
#define __pp_op_eq_14_11__() 0
#define __pp_op_gt_14_11__() 0
#endif

#else

#error "cmp op 11 and op 14 failed. '__pp_op_11__' or '__pp_op_14__' not defined"

#endif
