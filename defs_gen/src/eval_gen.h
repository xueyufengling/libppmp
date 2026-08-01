#ifndef _PPMP_EVALGEN
#define _PPMP_EVALGEN

#include <string>

namespace ppmp
{
extern void pp_store_op_digit_gen(const std::string& path_prefix, int max_op, int n = 19); //19位足以容纳uint64_t

extern void pp_store_op_gen(const std::string& path_prefix, int max_op, int n = 19);
}

#endif//_PPMP_EVALGEN
