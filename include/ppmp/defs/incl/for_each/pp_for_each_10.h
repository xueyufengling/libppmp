#if !defined(__pp_for_each_list_10__)

	#error "file iterate failed. '__pp_for_each_list_10__()' not defined"

#elif !defined(__pp_for_each_incl_file_10__)

	#error "file iterate failed. '__pp_for_each_incl_file_10__()' not defined"

#else

	#if !defined(__pp_for_each_i_10__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_10__() 0
		#define __pp_for_each_end_10__() __sizeof__(__pp_for_each_list_10__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_10__()
		#include __store_pp_for_each_i__(10)

	#endif

	#if !defined(__pp_for_each_break_10__) && ((__pp_for_each_i__(10)) < (__pp_for_each_end_10__()))

		#define __pp_for_each_item_10__() __at_exp__(__pp_for_each_i__(10), __pp_for_each_list_10__())

		#include __pp_for_each_incl_file_10__()

		#undef __pp_for_each_item_10__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(10) + 1
		#include __store_pp_for_each_i__(10)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_10.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_10__
		#undef __pp_for_each_i_10__
		#undef __pp_for_each_incl_file_10__
		#undef __pp_for_each_end_10__
		#undef __pp_for_each_begin_10__

	#endif

#endif
