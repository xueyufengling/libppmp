#if defined(__pp_op_15__) && defined(__pp_op_11__)

#undef __pp_op_lt_15_11__
#undef __pp_op_eq_15_11__
#undef __pp_op_gt_15_11__
#undef __pp_op_lt_11_15__
#undef __pp_op_eq_11_15__
#undef __pp_op_gt_11_15__

#if (__pp_op_15__()) < (__pp_op_11__())
#define __pp_op_lt_15_11__() 1
#define __pp_op_eq_15_11__() 0
#define __pp_op_gt_15_11__() 0
#define __pp_op_lt_11_15__() 0
#define __pp_op_eq_11_15__() 0
#define __pp_op_gt_11_15__() 1
#elif (__pp_op_15__()) == (__pp_op_11__())
#define __pp_op_lt_15_11__() 0
#define __pp_op_eq_15_11__() 1
#define __pp_op_gt_15_11__() 0
#define __pp_op_lt_11_15__() 0
#define __pp_op_eq_11_15__() 1
#define __pp_op_gt_11_15__() 0
#elif (__pp_op_15__()) > (__pp_op_11__())
#define __pp_op_lt_15_11__() 0
#define __pp_op_eq_15_11__() 0
#define __pp_op_gt_15_11__() 1
#define __pp_op_lt_11_15__() 1
#define __pp_op_eq_11_15__() 0
#define __pp_op_gt_11_15__() 0
#endif

#else

#error "cmp op 15 and op 11 failed. '__pp_op_15__' or '__pp_op_11__' not defined"

#endif
