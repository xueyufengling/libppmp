#if !defined(__pp_for_begin_7__)

	#error "file iterate failed. '__pp_for_begin_7__()' not defined"

#elif !defined(__pp_for_end_7__)

	#error "file iterate failed. '__pp_for_end_7__()' not defined"

#elif !defined(__pp_for_incl_file_7__)

	#error "file iterate failed. '__pp_for_incl_file_7__()' not defined"

#else

	#if !defined(__pp_for_i_7__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_7__()
		#include __store_pp_for_i__(7)

	#endif

	#if !defined(__pp_for_break_7__) && ((__pp_for_i__(7)) < (__pp_for_end_7__()))

		#include __pp_for_incl_file_7__()

		#define __pp_expr_for_i__() __pp_for_i__(7) + 1
		#include __store_pp_for_i__(7)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_7.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_7__
		#undef __pp_for_i_7__
		#undef __pp_for_incl_file_7__
		#undef __pp_for_end_7__
		#undef __pp_for_begin_7__

	#endif

#endif
