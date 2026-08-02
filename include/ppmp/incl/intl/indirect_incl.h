#if defined(__pp_incl_file__)
#define __pp_indirect_incl__() 1
#include __pp_incl_file__()
#undef __pp_indirect_incl__
#else
#error "include target '__pp_incl_file__' not defined"
#endif
