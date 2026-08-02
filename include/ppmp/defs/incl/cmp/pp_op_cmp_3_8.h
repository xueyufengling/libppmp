#if defined(__pp_op_3__) && defined(__pp_op_8__)

#undef __pp_op_lt_3_8__
#undef __pp_op_eq_3_8__
#undef __pp_op_gt_3_8__
#undef __pp_op_lt_8_3__
#undef __pp_op_eq_8_3__
#undef __pp_op_gt_8_3__

#if (__pp_op_3__()) < (__pp_op_8__())
#define __pp_op_lt_3_8__() 1
#define __pp_op_eq_3_8__() 0
#define __pp_op_gt_3_8__() 0
#define __pp_op_lt_8_3__() 0
#define __pp_op_eq_8_3__() 0
#define __pp_op_gt_8_3__() 1
#elif (__pp_op_3__()) == (__pp_op_8__())
#define __pp_op_lt_3_8__() 0
#define __pp_op_eq_3_8__() 1
#define __pp_op_gt_3_8__() 0
#define __pp_op_lt_8_3__() 0
#define __pp_op_eq_8_3__() 1
#define __pp_op_gt_8_3__() 0
#elif (__pp_op_3__()) > (__pp_op_8__())
#define __pp_op_lt_3_8__() 0
#define __pp_op_eq_3_8__() 0
#define __pp_op_gt_3_8__() 1
#define __pp_op_lt_8_3__() 1
#define __pp_op_eq_8_3__() 0
#define __pp_op_gt_8_3__() 0
#endif

#else

#error "cmp op 3 and op 8 failed. '__pp_op_3__' or '__pp_op_8__' not defined"

#endif
