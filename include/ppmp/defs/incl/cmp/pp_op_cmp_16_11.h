#if defined(__pp_op_16__) && defined(__pp_op_11__)

#undef __pp_op_lt_16_11__
#undef __pp_op_eq_16_11__
#undef __pp_op_gt_16_11__
#undef __pp_op_lt_11_16__
#undef __pp_op_eq_11_16__
#undef __pp_op_gt_11_16__

#if (__pp_op_16__()) < (__pp_op_11__())
#define __pp_op_lt_16_11__() 1
#define __pp_op_eq_16_11__() 0
#define __pp_op_gt_16_11__() 0
#define __pp_op_lt_11_16__() 0
#define __pp_op_eq_11_16__() 0
#define __pp_op_gt_11_16__() 1
#elif (__pp_op_16__()) == (__pp_op_11__())
#define __pp_op_lt_16_11__() 0
#define __pp_op_eq_16_11__() 1
#define __pp_op_gt_16_11__() 0
#define __pp_op_lt_11_16__() 0
#define __pp_op_eq_11_16__() 1
#define __pp_op_gt_11_16__() 0
#elif (__pp_op_16__()) > (__pp_op_11__())
#define __pp_op_lt_16_11__() 0
#define __pp_op_eq_16_11__() 0
#define __pp_op_gt_16_11__() 1
#define __pp_op_lt_11_16__() 1
#define __pp_op_eq_11_16__() 0
#define __pp_op_gt_11_16__() 0
#endif

#else

#error "cmp 'pp_op' 16 and 11 failed. '__pp_op_16__()' or '__pp_op_11__()' not defined"

#endif
