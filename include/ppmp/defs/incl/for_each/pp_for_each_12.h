#if !defined(__pp_for_each_list_12__)

	#error "file iterate failed. '__pp_for_each_list_12__()' not defined"

#elif !defined(__pp_for_each_incl_file_12__)

	#error "file iterate failed. '__pp_for_each_incl_file_12__()' not defined"

#else

	#if !defined(__pp_for_each_i_12__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_12__() 0
		#define __pp_for_each_end_12__() __sizeof__(__pp_for_each_list_12__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_12__()
		#include __store_pp_for_each_i__(12)

	#endif

	#if !defined(__pp_for_each_break_12__) && ((__pp_for_each_i__(12)) < (__pp_for_each_end_12__()))

		#define __pp_for_each_elem_12__() __at_exp__(__pp_for_each_i__(12), __pp_for_each_list_12__())

		#include __pp_for_each_incl_file_12__()

		#undef __pp_for_each_elem_12__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(12) + 1
		#include __store_pp_for_each_i__(12)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_12.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_12__
		#undef __pp_for_each_i_12__
		#undef __pp_for_each_incl_file_12__
		#undef __pp_for_each_end_12__
		#undef __pp_for_each_begin_12__

	#endif

#endif
