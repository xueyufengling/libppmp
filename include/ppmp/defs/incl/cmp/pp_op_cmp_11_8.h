#if defined(__pp_op_11__) && defined(__pp_op_8__)

#undef __pp_op_lt_11_8__
#undef __pp_op_eq_11_8__
#undef __pp_op_gt_11_8__
#undef __pp_op_lt_8_11__
#undef __pp_op_eq_8_11__
#undef __pp_op_gt_8_11__

#if (__pp_op_11__()) < (__pp_op_8__())
#define __pp_op_lt_11_8__() 1
#define __pp_op_eq_11_8__() 0
#define __pp_op_gt_11_8__() 0
#define __pp_op_lt_8_11__() 0
#define __pp_op_eq_8_11__() 0
#define __pp_op_gt_8_11__() 1
#elif (__pp_op_11__()) == (__pp_op_8__())
#define __pp_op_lt_11_8__() 0
#define __pp_op_eq_11_8__() 1
#define __pp_op_gt_11_8__() 0
#define __pp_op_lt_8_11__() 0
#define __pp_op_eq_8_11__() 1
#define __pp_op_gt_8_11__() 0
#elif (__pp_op_11__()) > (__pp_op_8__())
#define __pp_op_lt_11_8__() 0
#define __pp_op_eq_11_8__() 0
#define __pp_op_gt_11_8__() 1
#define __pp_op_lt_8_11__() 1
#define __pp_op_eq_8_11__() 0
#define __pp_op_gt_8_11__() 0
#endif

#else

#error "cmp op 11 and op 8 failed. '__pp_op_11__' or '__pp_op_8__' not defined"

#endif
