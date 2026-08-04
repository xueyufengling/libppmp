#if !defined(__pp_for_each_list_5__)

	#error "file iterate failed. '__pp_for_each_list_5__()' not defined"

#elif !defined(__pp_for_each_incl_file_5__)

	#error "file iterate failed. '__pp_for_each_incl_file_5__()' not defined"

#else

	#if !defined(__pp_for_each_i_5__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_5__() 0
		#define __pp_for_each_end_5__() __sizeof__(__pp_for_each_list_5__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_5__()
		#include __store_pp_for_each_i__(5)

	#endif

	#if !defined(__pp_for_each_break_5__) && ((__pp_for_each_i__(5)) < (__pp_for_each_end_5__()))

		#define __pp_for_each_elem_5__() __at_exp__(__pp_for_each_i__(5), __pp_for_each_list_5__())

		#include __pp_for_each_incl_file_5__()

		#undef __pp_for_each_elem_5__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(5) + 1
		#include __store_pp_for_each_i__(5)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_5.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_5__
		#undef __pp_for_each_i_5__
		#undef __pp_for_each_incl_file_5__
		#undef __pp_for_each_end_5__
		#undef __pp_for_each_begin_5__

	#endif

#endif
