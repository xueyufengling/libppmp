#if !defined(__pp_for_begin_5__)

	#error "file iterate failed. '__pp_for_begin_5__()' not defined"

#elif !defined(__pp_for_end_5__)

	#error "file iterate failed. '__pp_for_end_5__()' not defined"

#elif !defined(__pp_for_incl_file_5__)

	#error "file iterate failed. '__pp_for_incl_file_5__()' not defined"

#else

	#if !defined(__pp_for_i_5__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_5__()
		#include __store_pp_for_i__(5)

	#endif

	#if !defined(__pp_for_break_5__) && ((__pp_for_i__(5)) < (__pp_for_end_5__()))

		#include __pp_for_incl_file_5__()

		#define __pp_expr_for_i__() __pp_for_i__(5) + 1
		#include __store_pp_for_i__(5)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_5.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_5__
		#undef __pp_for_i_5__
		#undef __pp_for_incl_file_5__
		#undef __pp_for_end_5__
		#undef __pp_for_begin_5__

	#endif

#endif
