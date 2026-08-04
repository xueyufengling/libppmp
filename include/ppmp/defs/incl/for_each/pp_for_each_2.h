#if !defined(__pp_for_each_list_2__)

	#error "file iterate failed. '__pp_for_each_list_2__()' not defined"

#elif !defined(__pp_for_each_incl_file_2__)

	#error "file iterate failed. '__pp_for_each_incl_file_2__()' not defined"

#else

	#if !defined(__pp_for_each_i_2__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_2__() 0
		#define __pp_for_each_end_2__() __sizeof__(__pp_for_each_list_2__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_2__()
		#include __store_pp_for_each_i__(2)

	#endif

	#if !defined(__pp_for_each_break_2__) && ((__pp_for_each_i__(2)) < (__pp_for_each_end_2__()))

		#define __pp_for_each_elem_2__() __at_exp__(__pp_for_each_i__(2), __pp_for_each_list_2__())

		#include __pp_for_each_incl_file_2__()

		#undef __pp_for_each_elem_2__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(2) + 1
		#include __store_pp_for_each_i__(2)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_2.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_2__
		#undef __pp_for_each_i_2__
		#undef __pp_for_each_incl_file_2__
		#undef __pp_for_each_end_2__
		#undef __pp_for_each_begin_2__

	#endif

#endif
