#if defined(__pp_incl_file__)
#undef __pp_on_incl__
#define __pp_on_incl__() 1
#include __pp_incl_file__()
#undef __pp_on_incl__
#undef __pp_incl_file__
#else
#error "include file '__pp_incl_file__()' not defined"
#endif
