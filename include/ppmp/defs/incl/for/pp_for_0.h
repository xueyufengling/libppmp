#if !defined(__pp_for_begin_0__)

	#error "file iterate failed. '__pp_for_begin_0__()' not defined"

#elif !defined(__pp_for_end_0__)

	#error "file iterate failed. '__pp_for_end_0__()' not defined"

#elif !defined(__pp_for_incl_file_0__)

	#error "file iterate failed. '__pp_for_incl_file_0__()' not defined"

#else

	#if !defined(__pp_for_i_0__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_0__()
		#include __store_pp_for_i__(0)

	#endif

	#if !defined(__pp_for_break_0__) && ((__pp_for_i__(0)) < (__pp_for_end_0__()))

		#include __pp_for_incl_file_0__()

		#define __pp_expr_for_i__() __pp_for_i__(0) + 1
		#include __store_pp_for_i__(0)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_0.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_0__
		#undef __pp_for_i_0__
		#undef __pp_for_incl_file_0__
		#undef __pp_for_end_0__
		#undef __pp_for_begin_0__

	#endif

#endif
