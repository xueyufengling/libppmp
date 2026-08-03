#if !defined(__pp_for_begin_12__)

	#error "file iterate failed. '__pp_for_begin_12__()' not defined"

#elif !defined(__pp_for_end_12__)

	#error "file iterate failed. '__pp_for_end_12__()' not defined"

#elif !defined(__pp_for_incl_file_12__)

	#error "file iterate failed. '__pp_for_incl_file_12__()' not defined"

#else

	#if !defined(__pp_for_i_12__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_12__()
		#include __store_pp_for_i__(12)

	#endif

	#if !defined(__pp_for_break_12__) && ((__pp_for_i__(12)) < (__pp_for_end_12__()))

		#include __pp_for_incl_file_12__()

		#define __pp_expr_for_i__() __pp_for_i__(12) + 1
		#include __store_pp_for_i__(12)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_12.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_12__
		#undef __pp_for_i_12__
		#undef __pp_for_incl_file_12__
		#undef __pp_for_end_12__
		#undef __pp_for_begin_12__

	#endif

#endif
