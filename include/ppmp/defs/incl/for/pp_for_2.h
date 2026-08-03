#if !defined(__pp_for_begin_2__)

	#error "file iterate failed. '__pp_for_begin_2__()' not defined"

#elif !defined(__pp_for_end_2__)

	#error "file iterate failed. '__pp_for_end_2__()' not defined"

#elif !defined(__pp_for_incl_file_2__)

	#error "file iterate failed. '__pp_for_incl_file_2__()' not defined"

#else

	#if !defined(__pp_for_i_2__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_2__()
		#include __store_pp_for_i__(2)

	#endif

	#if !defined(__pp_for_break_2__) && ((__pp_for_i__(2)) < (__pp_for_end_2__()))

		#include __pp_for_incl_file_2__()

		#define __pp_expr_for_i__() __pp_for_i__(2) + 1
		#include __store_pp_for_i__(2)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_2.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_2__
		#undef __pp_for_i_2__
		#undef __pp_for_incl_file_2__
		#undef __pp_for_end_2__
		#undef __pp_for_begin_2__

	#endif

#endif
