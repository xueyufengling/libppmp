#if !defined(__pp_for_each_list_0__)

	#error "file iterate failed. '__pp_for_each_list_0__()' not defined"

#elif !defined(__pp_for_each_incl_file_0__)

	#error "file iterate failed. '__pp_for_each_incl_file_0__()' not defined"

#else

	#if !defined(__pp_for_each_i_0__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_0__() 0
		#define __pp_for_each_end_0__() __sizeof__(__pp_for_each_list_0__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_0__()
		#include __store_pp_for_each_i__(0)

	#endif

	#if !defined(__pp_for_each_break_0__) && ((__pp_for_each_i__(0)) < (__pp_for_each_end_0__()))

		#define __pp_for_each_item_0__() __at_exp__(__pp_for_each_i__(0), __pp_for_each_list_0__())

		#include __pp_for_each_incl_file_0__()

		#undef __pp_for_each_item_0__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(0) + 1
		#include __store_pp_for_each_i__(0)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_0.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_0__
		#undef __pp_for_each_i_0__
		#undef __pp_for_each_incl_file_0__
		#undef __pp_for_each_end_0__
		#undef __pp_for_each_begin_0__

	#endif

#endif
