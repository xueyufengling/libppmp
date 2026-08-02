#ifndef _PPMP_INCLGENGEN
#define _PPMP_INCLGENGEN

#include <string>

namespace ppmp
{
// ***********
/**
 * 由于宏展开都是惰性求值，一旦表达式中的成员值变化，则下次展开时展开结果重新求值也会变化。以下两个函数负责生成固化整数的宏，固化后的值与当前值相同，但展开表达式不依赖原宏。
 */
extern void pp_store_digit_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name, const std::string& store_name, int max_op, int n = 19); //19位足以容纳uint64_t
extern void pp_store_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name, const std::string& store_name, int max_op, int n = 19);
extern void pp_store_expr_auto_undef_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name);
extern void pp_store_header_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& file_header_prot, const std::string& store_name, int max_op, int n = 19);

inline void pp_store_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& file_header_prot, const std::string& expr_name, const std::string& store_name, int max_op, int n = 19)
{
	pp_store_header_gen(incl_path, file_prefix, file_header_prot, store_name, max_op, n);
	pp_store_digit_gen(incl_path, file_prefix, expr_name, store_name, max_op, n);
	pp_store_gen(incl_path, file_prefix, expr_name, store_name, max_op, n);
	pp_store_expr_auto_undef_gen(incl_path, file_prefix, expr_name);
}

// 大小比较
extern void pp_store_cmp_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& file_header_prot, const std::string& store_name, int max_op);

// ***********

// 全局操作数
inline void pp_store_op_gen(const std::string& incl_path, int max_op, int n = 19)
{
	pp_store_gen(incl_path, "ppmp/defs/incl/op/", "_PPMP_DEFS_INCL_OP_STOREPPOP", "pp_expr", "pp_op", max_op, n);
	pp_store_cmp_gen(incl_path, "ppmp/defs/incl/cmp/", "_PPMP_DEFS_INCL_CMP_CMPPPOP", "pp_op", max_op);
}

}

#endif//_PPMP_INCLGENGEN
