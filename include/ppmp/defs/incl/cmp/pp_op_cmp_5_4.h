#if defined(__pp_op_5__) && defined(__pp_op_4__)

#undef __pp_op_lt_5_4__
#undef __pp_op_eq_5_4__
#undef __pp_op_gt_5_4__
#undef __pp_op_lt_4_5__
#undef __pp_op_eq_4_5__
#undef __pp_op_gt_4_5__

#if (__pp_op_5__()) < (__pp_op_4__())
#define __pp_op_lt_5_4__() 1
#define __pp_op_eq_5_4__() 0
#define __pp_op_gt_5_4__() 0
#define __pp_op_lt_4_5__() 0
#define __pp_op_eq_4_5__() 0
#define __pp_op_gt_4_5__() 1
#elif (__pp_op_5__()) == (__pp_op_4__())
#define __pp_op_lt_5_4__() 0
#define __pp_op_eq_5_4__() 1
#define __pp_op_gt_5_4__() 0
#define __pp_op_lt_4_5__() 0
#define __pp_op_eq_4_5__() 1
#define __pp_op_gt_4_5__() 0
#elif (__pp_op_5__()) > (__pp_op_4__())
#define __pp_op_lt_5_4__() 0
#define __pp_op_eq_5_4__() 0
#define __pp_op_gt_5_4__() 1
#define __pp_op_lt_4_5__() 1
#define __pp_op_eq_4_5__() 0
#define __pp_op_gt_4_5__() 0
#endif

#else

#error "cmp op 5 and op 4 failed. '__pp_op_5__' or '__pp_op_4__' not defined"

#endif
