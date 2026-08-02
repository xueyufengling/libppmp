#if defined(__pp_op_11__) && defined(__pp_op_16__)

#undef __pp_op_lt_11_16__
#undef __pp_op_eq_11_16__
#undef __pp_op_gt_11_16__
#undef __pp_op_lt_16_11__
#undef __pp_op_eq_16_11__
#undef __pp_op_gt_16_11__

#if (__pp_op_11__()) < (__pp_op_16__())
#define __pp_op_lt_11_16__() 1
#define __pp_op_eq_11_16__() 0
#define __pp_op_gt_11_16__() 0
#define __pp_op_lt_16_11__() 0
#define __pp_op_eq_16_11__() 0
#define __pp_op_gt_16_11__() 1
#elif (__pp_op_11__()) == (__pp_op_16__())
#define __pp_op_lt_11_16__() 0
#define __pp_op_eq_11_16__() 1
#define __pp_op_gt_11_16__() 0
#define __pp_op_lt_16_11__() 0
#define __pp_op_eq_16_11__() 1
#define __pp_op_gt_16_11__() 0
#elif (__pp_op_11__()) > (__pp_op_16__())
#define __pp_op_lt_11_16__() 0
#define __pp_op_eq_11_16__() 0
#define __pp_op_gt_11_16__() 1
#define __pp_op_lt_16_11__() 1
#define __pp_op_eq_16_11__() 0
#define __pp_op_gt_16_11__() 0
#endif

#else

#error "cmp op 11 and op 16 failed. '__pp_op_11__' or '__pp_op_16__' not defined"

#endif
