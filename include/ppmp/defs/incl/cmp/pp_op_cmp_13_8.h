#if defined(__pp_op_13__) && defined(__pp_op_8__)

#undef __pp_op_lt_13_8__
#undef __pp_op_eq_13_8__
#undef __pp_op_gt_13_8__
#undef __pp_op_lt_8_13__
#undef __pp_op_eq_8_13__
#undef __pp_op_gt_8_13__

#if (__pp_op_13__()) < (__pp_op_8__())
#define __pp_op_lt_13_8__() 1
#define __pp_op_eq_13_8__() 0
#define __pp_op_gt_13_8__() 0
#define __pp_op_lt_8_13__() 0
#define __pp_op_eq_8_13__() 0
#define __pp_op_gt_8_13__() 1
#elif (__pp_op_13__()) == (__pp_op_8__())
#define __pp_op_lt_13_8__() 0
#define __pp_op_eq_13_8__() 1
#define __pp_op_gt_13_8__() 0
#define __pp_op_lt_8_13__() 0
#define __pp_op_eq_8_13__() 1
#define __pp_op_gt_8_13__() 0
#elif (__pp_op_13__()) > (__pp_op_8__())
#define __pp_op_lt_13_8__() 0
#define __pp_op_eq_13_8__() 0
#define __pp_op_gt_13_8__() 1
#define __pp_op_lt_8_13__() 1
#define __pp_op_eq_8_13__() 0
#define __pp_op_gt_8_13__() 0
#endif

#else

#error "cmp op 13 and op 8 failed. '__pp_op_13__' or '__pp_op_8__' not defined"

#endif
