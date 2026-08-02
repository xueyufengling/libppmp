#if defined(__pp_op_16__) && defined(__pp_op_4__)

#undef __pp_op_lt_16_4__
#undef __pp_op_eq_16_4__
#undef __pp_op_gt_16_4__
#undef __pp_op_lt_4_16__
#undef __pp_op_eq_4_16__
#undef __pp_op_gt_4_16__

#if (__pp_op_16__()) < (__pp_op_4__())
#define __pp_op_lt_16_4__() 1
#define __pp_op_eq_16_4__() 0
#define __pp_op_gt_16_4__() 0
#define __pp_op_lt_4_16__() 0
#define __pp_op_eq_4_16__() 0
#define __pp_op_gt_4_16__() 1
#elif (__pp_op_16__()) == (__pp_op_4__())
#define __pp_op_lt_16_4__() 0
#define __pp_op_eq_16_4__() 1
#define __pp_op_gt_16_4__() 0
#define __pp_op_lt_4_16__() 0
#define __pp_op_eq_4_16__() 1
#define __pp_op_gt_4_16__() 0
#elif (__pp_op_16__()) > (__pp_op_4__())
#define __pp_op_lt_16_4__() 0
#define __pp_op_eq_16_4__() 0
#define __pp_op_gt_16_4__() 1
#define __pp_op_lt_4_16__() 1
#define __pp_op_eq_4_16__() 0
#define __pp_op_gt_4_16__() 0
#endif

#else

#error "cmp op 16 and op 4 failed. '__pp_op_16__' or '__pp_op_4__' not defined"

#endif
