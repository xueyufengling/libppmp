#if !defined(__pp_for_begin_6__)

	#error "file iterate failed. '__pp_for_begin_6__()' not defined"

#elif !defined(__pp_for_end_6__)

	#error "file iterate failed. '__pp_for_end_6__()' not defined"

#elif !defined(__pp_for_incl_file_6__)

	#error "file iterate failed. '__pp_for_incl_file_6__()' not defined"

#else

	#if !defined(__pp_for_i_6__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_6__()
		#include __store_pp_for_i__(6)

	#endif

	#if !defined(__pp_for_break_6__) && ((__pp_for_i__(6)) < (__pp_for_end_6__()))

		#include __pp_for_incl_file_6__()

		#define __pp_expr_for_i__() __pp_for_i__(6) + 1
		#include __store_pp_for_i__(6)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_6.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_6__
		#undef __pp_for_i_6__
		#undef __pp_for_incl_file_6__
		#undef __pp_for_end_6__
		#undef __pp_for_begin_6__

	#endif

#endif
