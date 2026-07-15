#ifndef _PPMP_DEFSGEN
#define _PPMP_DEFSGEN

#include <string>

namespace ppmp
{
// 生成 defs/cat_noexp.h
void cat_noexp_gen(const std::string& path, int n);

// 生成 defs/full_scan.h
void full_scan_gen(const std::string& path, int n, int max_level = 16);

// 生成 defs/inc.h
void inc_gen(const std::string& path, int n);

// 生成 defs/dec.h
void dec_gen(const std::string& path, int n);

// 生成 defs/at.h
void at_gen(const std::string& path, int n);

// 生成 defs/list_front.h
void list_front_gen(const std::string& path, int n);

// 生成 defs/list_rest.h
void list_rest_gen(const std::string& path, int n);

// 生成 defs/placeholders.h
void placeholders_gen(const std::string& path, int n);

// 生成 defs/defer.h
void defer_gen(const std::string& path, int pass);

// 生成 defs/num_equal.h
void num_equal_gen(const std::string& path, int n);

// 生成 defs/for_each.h
void for_each_gen(const std::string& path, int n, int max_level);

// 生成 defs/for.h
void for_gen(const std::string& path, int n, int max_level);

// 生成 defs/while.h
void while_gen(const std::string& path, int n, int max_level);

// 生成 defs/for_recursive.h
void for_recursive_gen(const std::string& path, int n, int max_level);

// 生成 defs/while_recursive.h
void while_recursive_gen(const std::string& path, int n, int max_level);
}

#endif//_PPMP_DEFSGEN
