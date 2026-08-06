#if !defined(__pp_for_each_list_6__)

	#error "file iterate failed. '__pp_for_each_list_6__()' not defined"

#elif !defined(__pp_for_each_incl_file_6__)

	#error "file iterate failed. '__pp_for_each_incl_file_6__()' not defined"

#else

	#if !defined(__pp_for_each_i_6__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_6__() 0
		#define __pp_for_each_end_6__() __sizeof__(__pp_for_each_list_6__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_6__()
		#include __store_pp_for_each_i__(6)

	#endif

	#if !defined(__pp_for_each_break_6__) && ((__pp_for_each_i__(6)) < (__pp_for_each_end_6__()))

		#define __pp_for_each_item_6__() __at_exp__(__pp_for_each_i__(6), __pp_for_each_list_6__())

		#include __pp_for_each_incl_file_6__()

		#undef __pp_for_each_item_6__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(6) + 1
		#include __store_pp_for_each_i__(6)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_6.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_6__
		#undef __pp_for_each_i_6__
		#undef __pp_for_each_incl_file_6__
		#undef __pp_for_each_end_6__
		#undef __pp_for_each_begin_6__

	#endif

#endif
