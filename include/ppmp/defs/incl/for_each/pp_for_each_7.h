#if !defined(__pp_for_each_list_7__)

	#error "file iterate failed. '__pp_for_each_list_7__()' not defined"

#elif !defined(__pp_for_each_incl_file_7__)

	#error "file iterate failed. '__pp_for_each_incl_file_7__()' not defined"

#else

	#if !defined(__pp_for_each_i_7__)

		#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>
		#include <ppmp/base.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_for_each_begin_7__() 0
		#define __pp_for_each_end_7__() __sizeof__(__pp_for_each_list_7__())

		#define __pp_expr_for_each_i__() __pp_for_each_begin_7__()
		#include __store_pp_for_each_i__(7)

	#endif

	#if !defined(__pp_for_each_break_7__) && ((__pp_for_each_i__(7)) < (__pp_for_each_end_7__()))

		#define __pp_for_each_elem_7__() __at_exp__(__pp_for_each_i__(7), __pp_for_each_list_7__())

		#include __pp_for_each_incl_file_7__()

		#undef __pp_for_each_elem_7__
		#define __pp_expr_for_each_i__() __pp_for_each_i__(7) + 1
		#include __store_pp_for_each_i__(7)

		#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_7.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_each_break_7__
		#undef __pp_for_each_i_7__
		#undef __pp_for_each_incl_file_7__
		#undef __pp_for_each_end_7__
		#undef __pp_for_each_begin_7__

	#endif

#endif
