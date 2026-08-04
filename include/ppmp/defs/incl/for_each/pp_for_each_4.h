#if !defined(__pp_for_each_list_4__)

	#error "file iterate failed. '__pp_for_each_list_4__()' not defined"

#elif !defined(__pp_for_each_incl_file_4__)

	#error "file iterate failed. '__pp_for_each_incl_file_4__()' not defined"

#else

	#if !defined(__pp_for_each_i_4__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_4__() 0
		#define __pp_for_each_end_4__() __sizeof__(__pp_for_each_list_4__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_4__()
		#include __store_pp_for_each_i__(4)

	#endif

	#if !defined(__pp_for_each_break_4__) && ((__pp_for_each_i__(4)) < (__pp_for_each_end_4__()))

		#define __pp_for_each_elem_4__() __at_exp__(__pp_for_each_i__(4), __pp_for_each_list_4__())

		#include __pp_for_each_incl_file_4__()

		#undef __pp_for_each_elem_4__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(4) + 1
		#include __store_pp_for_each_i__(4)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_4.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_4__
		#undef __pp_for_each_i_4__
		#undef __pp_for_each_incl_file_4__
		#undef __pp_for_each_end_4__
		#undef __pp_for_each_begin_4__

	#endif

#endif
