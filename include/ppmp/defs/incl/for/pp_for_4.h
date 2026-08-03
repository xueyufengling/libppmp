#if !defined(__pp_for_begin_4__)

	#error "file iterate failed. '__pp_for_begin_4__()' not defined"

#elif !defined(__pp_for_end_4__)

	#error "file iterate failed. '__pp_for_end_4__()' not defined"

#elif !defined(__pp_for_incl_file_4__)

	#error "file iterate failed. '__pp_for_incl_file_4__()' not defined"

#else

	#if !defined(__pp_for_i_4__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_4__()
		#include __store_pp_for_i__(4)

	#endif

	#if !defined(__pp_for_break_4__) && ((__pp_for_i__(4)) < (__pp_for_end_4__()))

		#include __pp_for_incl_file_4__()

		#define __pp_expr_for_i__() __pp_for_i__(4) + 1
		#include __store_pp_for_i__(4)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_4.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_4__
		#undef __pp_for_i_4__
		#undef __pp_for_incl_file_4__
		#undef __pp_for_end_4__
		#undef __pp_for_begin_4__

	#endif

#endif
