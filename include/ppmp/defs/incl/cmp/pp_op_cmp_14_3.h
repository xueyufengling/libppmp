#if defined(__pp_op_14__) && defined(__pp_op_3__)

#undef __pp_op_lt_14_3__
#undef __pp_op_eq_14_3__
#undef __pp_op_gt_14_3__
#undef __pp_op_lt_3_14__
#undef __pp_op_eq_3_14__
#undef __pp_op_gt_3_14__

#if (__pp_op_14__()) < (__pp_op_3__())
#define __pp_op_lt_14_3__() 1
#define __pp_op_eq_14_3__() 0
#define __pp_op_gt_14_3__() 0
#define __pp_op_lt_3_14__() 0
#define __pp_op_eq_3_14__() 0
#define __pp_op_gt_3_14__() 1
#elif (__pp_op_14__()) == (__pp_op_3__())
#define __pp_op_lt_14_3__() 0
#define __pp_op_eq_14_3__() 1
#define __pp_op_gt_14_3__() 0
#define __pp_op_lt_3_14__() 0
#define __pp_op_eq_3_14__() 1
#define __pp_op_gt_3_14__() 0
#elif (__pp_op_14__()) > (__pp_op_3__())
#define __pp_op_lt_14_3__() 0
#define __pp_op_eq_14_3__() 0
#define __pp_op_gt_14_3__() 1
#define __pp_op_lt_3_14__() 1
#define __pp_op_eq_3_14__() 0
#define __pp_op_gt_3_14__() 0
#endif

#else

#error "cmp op 14 and op 3 failed. '__pp_op_14__' or '__pp_op_3__' not defined"

#endif
