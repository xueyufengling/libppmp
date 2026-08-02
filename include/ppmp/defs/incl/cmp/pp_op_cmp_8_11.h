#if defined(__pp_op_8__) && defined(__pp_op_11__)

#undef __pp_op_lt_8_11__
#undef __pp_op_eq_8_11__
#undef __pp_op_gt_8_11__
#undef __pp_op_lt_11_8__
#undef __pp_op_eq_11_8__
#undef __pp_op_gt_11_8__

#if (__pp_op_8__()) < (__pp_op_11__())
#define __pp_op_lt_8_11__() 1
#define __pp_op_eq_8_11__() 0
#define __pp_op_gt_8_11__() 0
#define __pp_op_lt_11_8__() 0
#define __pp_op_eq_11_8__() 0
#define __pp_op_gt_11_8__() 1
#elif (__pp_op_8__()) == (__pp_op_11__())
#define __pp_op_lt_8_11__() 0
#define __pp_op_eq_8_11__() 1
#define __pp_op_gt_8_11__() 0
#define __pp_op_lt_11_8__() 0
#define __pp_op_eq_11_8__() 1
#define __pp_op_gt_11_8__() 0
#elif (__pp_op_8__()) > (__pp_op_11__())
#define __pp_op_lt_8_11__() 0
#define __pp_op_eq_8_11__() 0
#define __pp_op_gt_8_11__() 1
#define __pp_op_lt_11_8__() 1
#define __pp_op_eq_11_8__() 0
#define __pp_op_gt_11_8__() 0
#endif

#else

#error "cmp op 8 and op 11 failed. '__pp_op_8__' or '__pp_op_11__' not defined"

#endif
