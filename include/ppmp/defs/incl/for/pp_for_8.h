#if !defined(__pp_for_begin_8__)

	#error "file iterate failed. '__pp_for_begin_8__()' not defined"

#elif !defined(__pp_for_end_8__)

	#error "file iterate failed. '__pp_for_end_8__()' not defined"

#elif !defined(__pp_for_incl_file_8__)

	#error "file iterate failed. '__pp_for_incl_file_8__()' not defined"

#else

	#if !defined(__pp_for_i_8__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_8__()
		#include __store_pp_for_i__(8)

	#endif

	#if !defined(__pp_for_break_8__) && ((__pp_for_i__(8)) < (__pp_for_end_8__()))

		#include __pp_for_incl_file_8__()

		#define __pp_expr_for_i__() __pp_for_i__(8) + 1
		#include __store_pp_for_i__(8)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_8.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_8__
		#undef __pp_for_i_8__
		#undef __pp_for_incl_file_8__
		#undef __pp_for_end_8__
		#undef __pp_for_begin_8__

	#endif

#endif
