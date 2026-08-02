#if defined(__pp_op_3__) && defined(__pp_op_5__)

#undef __pp_op_lt_3_5__
#undef __pp_op_eq_3_5__
#undef __pp_op_gt_3_5__
#undef __pp_op_lt_5_3__
#undef __pp_op_eq_5_3__
#undef __pp_op_gt_5_3__

#if (__pp_op_3__()) < (__pp_op_5__())
#define __pp_op_lt_3_5__() 1
#define __pp_op_eq_3_5__() 0
#define __pp_op_gt_3_5__() 0
#define __pp_op_lt_5_3__() 0
#define __pp_op_eq_5_3__() 0
#define __pp_op_gt_5_3__() 1
#elif (__pp_op_3__()) == (__pp_op_5__())
#define __pp_op_lt_3_5__() 0
#define __pp_op_eq_3_5__() 1
#define __pp_op_gt_3_5__() 0
#define __pp_op_lt_5_3__() 0
#define __pp_op_eq_5_3__() 1
#define __pp_op_gt_5_3__() 0
#elif (__pp_op_3__()) > (__pp_op_5__())
#define __pp_op_lt_3_5__() 0
#define __pp_op_eq_3_5__() 0
#define __pp_op_gt_3_5__() 1
#define __pp_op_lt_5_3__() 1
#define __pp_op_eq_5_3__() 0
#define __pp_op_gt_5_3__() 0
#endif

#else

#error "cmp op 3 and op 5 failed. '__pp_op_3__' or '__pp_op_5__' not defined"

#endif
