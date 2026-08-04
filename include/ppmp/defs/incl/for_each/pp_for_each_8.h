#if !defined(__pp_for_each_list_8__)

	#error "file iterate failed. '__pp_for_each_list_8__()' not defined"

#elif !defined(__pp_for_each_incl_file_8__)

	#error "file iterate failed. '__pp_for_each_incl_file_8__()' not defined"

#else

	#if !defined(__pp_for_each_i_8__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_8__() 0
		#define __pp_for_each_end_8__() __sizeof__(__pp_for_each_list_8__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_8__()
		#include __store_pp_for_each_i__(8)

	#endif

	#if !defined(__pp_for_each_break_8__) && ((__pp_for_each_i__(8)) < (__pp_for_each_end_8__()))

		#define __pp_for_each_elem_8__() __at_exp__(__pp_for_each_i__(8), __pp_for_each_list_8__())

		#include __pp_for_each_incl_file_8__()

		#undef __pp_for_each_elem_8__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(8) + 1
		#include __store_pp_for_each_i__(8)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_8.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_8__
		#undef __pp_for_each_i_8__
		#undef __pp_for_each_incl_file_8__
		#undef __pp_for_each_end_8__
		#undef __pp_for_each_begin_8__

	#endif

#endif
