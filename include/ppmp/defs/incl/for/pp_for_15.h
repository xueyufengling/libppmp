#if !defined(__pp_for_begin_15__)

	#error "file iterate failed. '__pp_for_begin_15__()' not defined"

#elif !defined(__pp_for_end_15__)

	#error "file iterate failed. '__pp_for_end_15__()' not defined"

#elif !defined(__pp_for_incl_file_15__)

	#error "file iterate failed. '__pp_for_incl_file_15__()' not defined"

#else

	#if !defined(__pp_for_i_15__)

		#include <ppmp/defs/incl/for/store_pp_for_i.h>
		#include <ppmp/incl/pp_incl.h>

		#define __pp_expr_for_i__() __pp_for_begin_15__()
		#include __store_pp_for_i__(15)

	#endif

	#if !defined(__pp_for_break_15__) && ((__pp_for_i__(15)) < (__pp_for_end_15__()))

		#include __pp_for_incl_file_15__()

		#define __pp_expr_for_i__() __pp_for_i__(15) + 1
		#include __store_pp_for_i__(15)

		#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_15.h>
		#include __pp_incl__()

	#else

		#undef __pp_for_break_15__
		#undef __pp_for_i_15__
		#undef __pp_for_incl_file_15__
		#undef __pp_for_end_15__
		#undef __pp_for_begin_15__

	#endif

#endif
