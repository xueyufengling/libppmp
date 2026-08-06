#if !defined(__pp_for_each_list_3__)

	#error "file iterate failed. '__pp_for_each_list_3__()' not defined"

#elif !defined(__pp_for_each_incl_file_3__)

	#error "file iterate failed. '__pp_for_each_incl_file_3__()' not defined"

#else

	#if !defined(__pp_for_each_i_3__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_3__() 0
		#define __pp_for_each_end_3__() __sizeof__(__pp_for_each_list_3__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_3__()
		#include __store_pp_for_each_i__(3)

	#endif

	#if !defined(__pp_for_each_break_3__) && ((__pp_for_each_i__(3)) < (__pp_for_each_end_3__()))

		#define __pp_for_each_item_3__() __at_exp__(__pp_for_each_i__(3), __pp_for_each_list_3__())

		#include __pp_for_each_incl_file_3__()

		#undef __pp_for_each_item_3__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(3) + 1
		#include __store_pp_for_each_i__(3)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_3.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_3__
		#undef __pp_for_each_i_3__
		#undef __pp_for_each_incl_file_3__
		#undef __pp_for_each_end_3__
		#undef __pp_for_each_begin_3__

	#endif

#endif
