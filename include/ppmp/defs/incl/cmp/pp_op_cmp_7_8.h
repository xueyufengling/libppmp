#if defined(__pp_op_7__) && defined(__pp_op_8__)

#undef __pp_op_lt_7_8__
#undef __pp_op_eq_7_8__
#undef __pp_op_gt_7_8__
#undef __pp_op_lt_8_7__
#undef __pp_op_eq_8_7__
#undef __pp_op_gt_8_7__

#if (__pp_op_7__()) < (__pp_op_8__())
#define __pp_op_lt_7_8__() 1
#define __pp_op_eq_7_8__() 0
#define __pp_op_gt_7_8__() 0
#define __pp_op_lt_8_7__() 0
#define __pp_op_eq_8_7__() 0
#define __pp_op_gt_8_7__() 1
#elif (__pp_op_7__()) == (__pp_op_8__())
#define __pp_op_lt_7_8__() 0
#define __pp_op_eq_7_8__() 1
#define __pp_op_gt_7_8__() 0
#define __pp_op_lt_8_7__() 0
#define __pp_op_eq_8_7__() 1
#define __pp_op_gt_8_7__() 0
#elif (__pp_op_7__()) > (__pp_op_8__())
#define __pp_op_lt_7_8__() 0
#define __pp_op_eq_7_8__() 0
#define __pp_op_gt_7_8__() 1
#define __pp_op_lt_8_7__() 1
#define __pp_op_eq_8_7__() 0
#define __pp_op_gt_8_7__() 0
#endif

#else

#error "cmp op 7 and op 8 failed. '__pp_op_7__' or '__pp_op_8__' not defined"

#endif
