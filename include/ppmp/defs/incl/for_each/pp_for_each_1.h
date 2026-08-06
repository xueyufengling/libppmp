#if !defined(__pp_for_each_list_1__)

	#error "file iterate failed. '__pp_for_each_list_1__()' not defined"

#elif !defined(__pp_for_each_incl_file_1__)

	#error "file iterate failed. '__pp_for_each_incl_file_1__()' not defined"

#else

	#if !defined(__pp_for_each_i_1__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_1__() 0
		#define __pp_for_each_end_1__() __sizeof__(__pp_for_each_list_1__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_1__()
		#include __store_pp_for_each_i__(1)

	#endif

	#if !defined(__pp_for_each_break_1__) && ((__pp_for_each_i__(1)) < (__pp_for_each_end_1__()))

		#define __pp_for_each_item_1__() __at_exp__(__pp_for_each_i__(1), __pp_for_each_list_1__())

		#include __pp_for_each_incl_file_1__()

		#undef __pp_for_each_item_1__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(1) + 1
		#include __store_pp_for_each_i__(1)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_1.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_1__
		#undef __pp_for_each_i_1__
		#undef __pp_for_each_incl_file_1__
		#undef __pp_for_each_end_1__
		#undef __pp_for_each_begin_1__

	#endif

#endif
