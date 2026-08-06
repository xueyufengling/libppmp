#include "incl_gen.h"

#include <iostream>
#include <fstream>
#include <sstream>

void ppmp::pp_store_header_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& file_header_prot, const std::string& expr_name, const std::string& store_name, int max_st, int n, bool auto_undef, bool gen_auto_undef)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	// 记录最大支持的位数n
	std::string header_file_path = incl_path + file_prefix + "store_" + store_name + ".h";
	std::ofstream file(header_file_path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << header_file_path << std::endl;
		return;
	}
	file << "#ifndef " << file_header_prot << "\n";
	file << "#define " << file_header_prot << "\n\n";
	file << "#include <ppmp/token.h>\n\n";
	file << "#define __" << store_name << "_digit_max_num__(...) " << n << "\n";
	file << "#define __" << store_name << "_digit_max_idx__(...) " << (n - 1) << "\n";
	file << "#define __" << store_name << "_max_num__(...) " << max_st << "\n";
	file << "#define __" << store_name << "_max_idx__(...) " << (max_st - 1) << "\n\n";
	// 一位数字存取
	file << "#define __store_" << store_name << "_digit__(st, n) <__cat__(5," << file_prefix << store_name << ", _, st, _, n).h>\n";
	file << "#define __" << store_name << "_digit__(st, n) __cat__(5, __" << store_name << "_, st, _, n, __)()\n";
	// 数字整体存取
	file << "#define __store_" << store_name << "__(st) <__cat__(3," << file_prefix << store_name << ", _, st).h>\n";
	file << "#define __" << store_name << "__(st) __cat__(3, __" << store_name << "_, st, __)()\n\n";
	file << "#define __" << expr_name << "_support_auto_undef__() " << auto_undef << "\n";
	file << "#define __" << expr_name << "_check_auto_undef__() " << gen_auto_undef << "\n\n";
	file << "#endif";
	file.close();
}

/**
 * 生成defs_file_prefix/<store_name>_<st>_<i>.h 系列文件
 * 每个文件定义__<store_name>_<st>_<i>__()宏，返回__<expr_name>__的计算结果第i位数字
 * i从0到n，其中0是个位，1是十位，依此类推。
 */
void ppmp::pp_store_digit_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name, const std::string& store_name, int max_st, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::string defs_file_prefix = incl_path + file_prefix + store_name;
	// 生成求值文件
	for(int st = 0; st < max_st; ++st)
	{
		for(int i = 0; i < n; ++i)
		{
			std::string path = defs_file_prefix + "_" + std::to_string(st) + "_" + std::to_string(i) + ".h";
			std::ofstream file(path);
			if(!file.is_open())
			{
				std::cerr << "failed to open file: " << path << std::endl;
				continue;
			}
			file << "#if defined(__" << expr_name << "__)\n\n";
			std::string div_expr;
			if(i == 0)
			{
				div_expr = "(__" + expr_name + "__())";
			}
			else
			{
				div_expr = "((__" + expr_name + "__()) / 1" + std::string(i, '0') + ")";
			}
			for(int digit = 0; digit <= 9; ++digit)
			{
				if(digit == 0)
				{
					file << "#if " << div_expr << " % 10 == 0\n";
					file << "#if " << div_expr << " >= 10\n";
					// 宏表达式总是延迟求值的，只在#if指令中，依据展开链的中间宏的当前定义求得一个值
					// 必须在使用完div_expr后才能undef原宏，防止惰性求值依赖__<store_name>_<st>_<i>__()的旧值
					file << "#undef __" << store_name << "_" << st << "_" << i << "__\n";
					file << "#define __" << store_name << "_" << st << "_" << i << "__() 0\n";
					file << "#else\n"; // 若高位无非0有效数字，则当前的0定义为空
					file << "#undef __" << store_name << "_" << st << "_" << i << "__\n";
					file << "#define __" << store_name << "_" << st << "_" << i << "__()\n";
					file << "#endif\n";
				}
				else
				{
					file << "#elif " << div_expr << " % 10 == " << digit << "\n";
					file << "#undef __" << store_name << "_" << st << "_" << i << "__\n";
					file << "#define __" << store_name << "_" << st << "_" << i << "__() " << digit << "\n";
				}
			}
			file << "#endif\n\n";
			file << "#else\n\n";
			file << "#error \"store digit " << i << " in '" << store_name << "' " << st << " failed. expr '__" << expr_name << "__()' not defined\"\n\n";
			file << "#endif\n";
			file.close();
		}
	}
}

// 根据宏开关实现自动undef
void ppmp::pp_auto_undef_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& name)
{
	std::string header_file_path = incl_path + file_prefix + name + "_auto_undef.h";
	std::ofstream file(header_file_path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << header_file_path << std::endl;
		return;
	}
	file << "#if defined(__" << name << "_auto_undef__)\n";
	file << "#if __" << name << "_auto_undef__()\n";
	file << "#undef __" << name << "__\n";
	file << "#endif\n";
	file << "#endif";
	file.close();
}

/**
 * 生成defs_file_prefix/<store_name>_<st>.h系列文件
 * 每个文件定义__<store_name>_<st>__()宏，用于存储运算结果
 */
void ppmp::pp_store_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name, const std::string& store_name, int max_st, int n, bool auto_undef, bool gen_auto_undef)
{
	if(max_st < 0 || n < 0)
	{
		std::cerr << "max_st and n must be >= 0" << std::endl;
		return;
	}
	if(auto_undef && gen_auto_undef)
		pp_auto_undef_gen(incl_path, file_prefix, expr_name);
	std::string defs_file_prefix = incl_path + file_prefix + store_name;
	for(int st = 0; st < max_st; ++st)
	{
		std::string path = defs_file_prefix + "_" + std::to_string(st) + ".h";
		std::ofstream file(path);
		if(!file.is_open())
		{
			std::cerr << "failed to open file: " << path << std::endl;
			continue;
		}
		file << "#if defined(__" << expr_name << "__)\n\n";
		// 判0的快速路径
		file << "#if (__" << expr_name << "__()) == 0\n\n";
		file << "#define __" << store_name << "_" << st << "_0__() 0\n";
		for(int j = 1; j <= n; ++j)
		{
			file << "#define __" << store_name << "_" << st << "_" << j << "__()\n";
		}
		file << "\n#else\n\n";
		file << "#include <" << file_prefix << "store_" << store_name << ".h>\n\n";
		for(int i = 0; i < n; ++i)
		{
			file << "#include __store_" << store_name << "_digit__(" << st << ", " << i << ")\n";
		}
		file << "\n#endif\n\n";
		file << "#undef __" << store_name << "_" << st << "__\n";
		file << "#define __" << store_name << "_" << st << "__() __cat__(" << n << ", ";
		for(int j = n - 1; j >= 0; --j)
		{
			file << "__" << store_name << "_" << st << "_" << j << "__()";
			if(j > 0)
			{
				file << ", ";
			}
		}
		file << ")\n\n";
		// 可选的自动取消expr宏定义
		if(auto_undef)
		{
			if(gen_auto_undef)
			{
				// 若选择生成auto_undef控制宏文件，则使用该控制宏
				file << "#include \"" << expr_name << "_auto_undef.h\"\n\n";
			}
			else
			{
				// 若不选择生成auto_undef控制宏文件，则直接undef
				file << "#undef __" << expr_name << "__\n\n";
			}
		}
		file << "#else\n\n";
		file << "#error \"store '" << store_name << "' " << st << " failed. expr '__" << expr_name << "__()' not defined\"\n\n";
		file << "#endif\n";
		file.close();
	}
}

/**
 * 生成defs_file_prefix/cmp_<store_name>_<st1>_<st2>.h系列文件
 * 比较__<store_name>_<st1>__和__<store_name>_<st2>__的大小关系
 * i和j从0到max_st
 */
void ppmp::pp_store_cmp_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& file_header_prot, const std::string& store_name, int max_st)
{
	if(max_st < 0)
	{
		std::cerr << "max_st must be >= 0" << std::endl;
		return;
	}
	// 用户使用宏定义头文件
	std::string header_file_path = incl_path + file_prefix + "cmp_" + store_name + ".h";
	std::ofstream file(header_file_path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << header_file_path << std::endl;
		return;
	}
	file << "#ifndef " << file_header_prot << "\n";
	file << "#define " << file_header_prot << "\n\n";
	file << "#include <ppmp/token.h>\n\n";
	file << "#define __cmp_" << store_name << "__(st1, st2) <__cat__(5," << file_prefix << store_name << ", _cmp_, st1, _, st2).h>\n";
	file << "#define __" << store_name << "_lt__(st1, st2) __cat__(5, __" << store_name << "_lt_, st1, _, st2, __)()\n";
	file << "#define __" << store_name << "_eq__(st1, st2) __cat__(5, __" << store_name << "_eq_, st1, _, st2, __)()\n";
	file << "#define __" << store_name << "_gt__(st1, st2) __cat__(5, __" << store_name << "_gt_, st1, _, st2, __)()\n\n";
	file << "#endif";
	file.close();
	std::string defs_file_prefix = incl_path + file_prefix + store_name;
	for(int i = 0; i <= max_st; ++i)
	{
		for(int j = 0; j <= max_st; ++j)
		{
			if(i == j)
				continue;
			std::string path = defs_file_prefix + "_cmp_" + std::to_string(i) + "_" + std::to_string(j) + ".h";
			std::ofstream file(path);
			if(!file.is_open())
			{
				std::cerr << "failed to open file: " << path << std::endl;
				continue;
			}
			file << "#if defined(__" << store_name << "_" << i << "__) && defined(__" << store_name << "_" << j << "__)\n\n";
			// 取消定义所有比较宏
			file << "#undef __" << store_name << "_lt_" << i << "_" << j << "__\n";
			file << "#undef __" << store_name << "_eq_" << i << "_" << j << "__\n";
			file << "#undef __" << store_name << "_gt_" << i << "_" << j << "__\n";
			file << "#undef __" << store_name << "_lt_" << j << "_" << i << "__\n";
			file << "#undef __" << store_name << "_eq_" << j << "_" << i << "__\n";
			file << "#undef __" << store_name << "_gt_" << j << "_" << i << "__\n\n";
			// 比较分支
			file << "#if (__" << store_name << "_" << i << "__()) < (__" << store_name << "_" << j << "__())\n";
			file << "#define __" << store_name << "_lt_" << i << "_" << j << "__() 1\n";
			file << "#define __" << store_name << "_eq_" << i << "_" << j << "__() 0\n";
			file << "#define __" << store_name << "_gt_" << i << "_" << j << "__() 0\n";
			file << "#define __" << store_name << "_lt_" << j << "_" << i << "__() 0\n";
			file << "#define __" << store_name << "_eq_" << j << "_" << i << "__() 0\n";
			file << "#define __" << store_name << "_gt_" << j << "_" << i << "__() 1\n";
			file << "#elif (__" << store_name << "_" << i << "__()) == (__" << store_name << "_" << j << "__())\n";
			file << "#define __" << store_name << "_lt_" << i << "_" << j << "__() 0\n";
			file << "#define __" << store_name << "_eq_" << i << "_" << j << "__() 1\n";
			file << "#define __" << store_name << "_gt_" << i << "_" << j << "__() 0\n";
			file << "#define __" << store_name << "_lt_" << j << "_" << i << "__() 0\n";
			file << "#define __" << store_name << "_eq_" << j << "_" << i << "__() 1\n";
			file << "#define __" << store_name << "_gt_" << j << "_" << i << "__() 0\n";
			file << "#elif (__" << store_name << "_" << i << "__()) > (__" << store_name << "_" << j << "__())\n";
			file << "#define __" << store_name << "_lt_" << i << "_" << j << "__() 0\n";
			file << "#define __" << store_name << "_eq_" << i << "_" << j << "__() 0\n";
			file << "#define __" << store_name << "_gt_" << i << "_" << j << "__() 1\n";
			file << "#define __" << store_name << "_lt_" << j << "_" << i << "__() 1\n";
			file << "#define __" << store_name << "_eq_" << j << "_" << i << "__() 0\n";
			file << "#define __" << store_name << "_gt_" << j << "_" << i << "__() 0\n";
			file << "#endif\n\n";
			file << "#else\n\n";
			file << "#error \"cmp '" << store_name << "' " << i << " and " << j << " failed. '__" << store_name << "_" << i << "__()' or '__" << store_name << "_" << j << "__()' not defined\"\n\n";
			file << "#endif\n";
			file.close();
		}
	}
}

/**
 * 生成ppmp/defs/incl/for/pp_for_i.h系列文件
 * 生成for循环迭代控制文件
 * i从0到overload
 */
void ppmp::pp_for_gen(const std::string& incl_path, int overload, int n)
{
	if(overload < 0)
	{
		std::cerr << "overload must be >= 0" << std::endl;
		return;
	}
	// 生成迭代计数器值固化的相关头文件
	pp_store_gen(incl_path, "ppmp/defs/incl/for/", "_PPMP_DEFS_INCL_FOR_STOREPPFORI", "pp_expr_for_i", "pp_for_i", overload, n, true, false);
	for(int i = 0; i < overload; ++i)
	{
		// 迭代逻辑主体
		std::string path = incl_path + "ppmp/defs/incl/for/pp_for_" + std::to_string(i) + ".h";
		std::ofstream file(path);
		if(!file.is_open())
		{
			std::cerr << "failed to open file: " << path << std::endl;
			continue;
		}
		file << "#if !defined(__pp_for_begin_" << i << "__)\n\n";
		file << "\t#error \"file iterate failed. '__pp_for_begin_" << i << "__()' not defined\"\n\n";
		file << "#elif !defined(__pp_for_end_" << i << "__)\n\n";
		file << "\t#error \"file iterate failed. '__pp_for_end_" << i << "__()' not defined\"\n\n";
		file << "#elif !defined(__pp_for_incl_file_" << i << "__)\n\n";
		file << "\t#error \"file iterate failed. '__pp_for_incl_file_" << i << "__()' not defined\"\n\n";
		file << "#else\n\n";
		file << "\t#if !defined(__pp_for_i_" << i << "__)\n\n";
		file << "\t\t#include <ppmp/defs/incl/for/store_pp_for_i.h>\n";
		file << "\t\t#include <ppmp/incl/pp_incl.h>\n\n";
		file << "\t\t#define __pp_expr_for_i__() __pp_for_begin_" << i << "__()\n";
		file << "\t\t#include __store_pp_for_i__(" << i << ")\n\n";
		file << "\t#endif\n\n";
		file << "\t#if !defined(__pp_for_break_" << i << "__) && ((__pp_for_i__(" << i << ")) < (__pp_for_end_" << i << "__()))\n\n";
		file << "\t\t#include __pp_for_incl_file_" << i << "__()\n\n";
		file << "\t\t#define __pp_expr_for_i__() __pp_for_i__(" << i << ") + 1\n";
		file << "\t\t#include __store_pp_for_i__(" << i << ")\n\n";
		file << "\t\t#define __pp_incl_file__() <ppmp/defs/incl/for/pp_for_" << i << ".h>\n";
		file << "\t\t#include __pp_incl__()\n\n";
		file << "\t#else\n\n";
		file << "\t\t#undef __pp_for_break_" << i << "__\n";
		file << "\t\t#undef __pp_for_i_" << i << "__\n";
		file << "\t\t#undef __pp_for_incl_file_" << i << "__\n";
		file << "\t\t#undef __pp_for_end_" << i << "__\n";
		file << "\t\t#undef __pp_for_begin_" << i << "__\n\n";
		file << "\t#endif\n\n";
		file << "#endif\n";
		file.close();
	}
}

/**
 * 生成ppmp/defs/incl/while/pp_while_i.h系列文件
 * 生成while循环迭代控制文件
 * i从0到overload
 */
void ppmp::pp_while_gen(const std::string& incl_path, int overload, int n)
{
	if(overload < 0)
	{
		std::cerr << "overload must be >= 0" << std::endl;
		return;
	}
	// 生成迭代计数器值固化的相关头文件
	pp_store_gen(incl_path, "ppmp/defs/incl/while/", "_PPMP_DEFS_INCL_WHILE_STOREPPWHILEI", "pp_expr_while_i", "pp_while_i", overload, n, true, false);
	for(int i = 0; i < overload; ++i)
	{
		std::string path = incl_path + "ppmp/defs/incl/while/pp_while_" + std::to_string(i) + ".h";
		std::ofstream file(path);
		if(!file.is_open())
		{
			std::cerr << "failed to open file: " << path << std::endl;
			continue;
		}
		file << "#if !defined(__pp_while_cond_" << i << "__)\n\n";
		file << "\t#error \"file iterate failed. '__pp_while_cond_" << i << "__()' not defined\"\n\n";
		file << "#elif !defined(__pp_while_incl_file_" << i << "__)\n\n";
		file << "\t#error \"file iterate failed. '__pp_while_incl_file_" << i << "__()' not defined\"\n\n";
		file << "#else\n\n";
		file << "\t#if !defined(__pp_while_i_" << i << "__)\n\n";
		file << "\t\t#include <ppmp/defs/incl/while/store_pp_while_i.h>\n";
		file << "\t\t#include <ppmp/incl/pp_incl.h>\n\n";
		file << "\t\t#define __pp_expr_while_i__() 0\n";
		file << "\t\t#include __store_pp_while_i__(" << i << ")\n\n";
		file << "\t#endif\n\n";
		file << "\t#if !defined(__pp_while_break_" << i << "__) && (__pp_while_cond_" << i << "__())\n\n";
		file << "\t\t#include __pp_while_incl_file_" << i << "__()\n\n";
		file << "\t\t#define __pp_expr_while_i__() __pp_while_i__(" << i << ") + 1\n";
		file << "\t\t#include __store_pp_while_i__(" << i << ")\n\n";
		file << "\t\t#define __pp_incl_file__() <ppmp/defs/incl/while/pp_while_" << i << ".h>\n";
		file << "\t\t#include __pp_incl__()\n\n";
		file << "\t#else\n\n";
		file << "\t\t#undef __pp_while_break_" << i << "__\n";
		file << "\t\t#undef __pp_while_i_" << i << "__\n";
		file << "\t\t#undef __pp_while_incl_file_" << i << "__\n";
		file << "\t\t#undef __pp_while_cond_" << i << "__\n\n";
		file << "\t#endif\n\n";
		file << "#endif\n";
		file.close();
	}
}

/**
 * 生成 ppmp/defs/incl/for_each/pp_for_each_i.h 系列文件
 * 生成 for_each 循环迭代控制文件
 * i 从 0 到 overload
 */
void ppmp::pp_for_each_gen(const std::string& incl_path, int overload, int n)
{
	if(overload < 0)
	{
		std::cerr << "overload must be >= 0" << std::endl;
		return;
	}
	// 生成迭代计数器值固化的相关头文件
	pp_store_gen(incl_path, "ppmp/defs/incl/for_each/", "_PPMP_DEFS_INCL_FOREACH_STOREPPFOREACHI", "pp_expr_for_each_i", "pp_for_each_i", overload, n, true, false);
	for(int i = 0; i < overload; ++i)
	{
		std::string path = incl_path + "ppmp/defs/incl/for_each/pp_for_each_" + std::to_string(i) + ".h";
		std::ofstream file(path);
		if(!file.is_open())
		{
			std::cerr << "failed to open file: " << path << std::endl;
			continue;
		}
		file << "#if !defined(__pp_for_each_list_" << i << "__)\n\n";
		file << "\t#error \"file iterate failed. '__pp_for_each_list_" << i << "__()' not defined\"\n\n";
		file << "#elif !defined(__pp_for_each_incl_file_" << i << "__)\n\n";
		file << "\t#error \"file iterate failed. '__pp_for_each_incl_file_" << i << "__()' not defined\"\n\n";
		file << "#else\n\n";
		file << "\t#if !defined(__pp_for_each_i_" << i << "__)\n\n";
		file << "\t\t#include <ppmp/defs/incl/for_each/store_pp_for_each_i.h>\n";
		file << "\t\t#include <ppmp/base.h>\n";
		file << "\t\t#include <ppmp/incl/pp_incl.h>\n\n";
		file << "\t\t#define __pp_for_each_begin_" << i << "__() 0\n";
		// __pp_for_each_end_<i>__()宏是延迟求值的，迭代过程中如果__pp_for_each_list_<i>__()改变，则将立即生效
		file << "\t\t#define __pp_for_each_end_" << i << "__() __sizeof__(__pp_for_each_list_" << i << "__())\n\n";
		file << "\t\t#define __pp_expr_for_each_i__() __pp_for_each_begin_" << i << "__()\n";
		file << "\t\t#include __store_pp_for_each_i__(" << i << ")\n\n";
		// 循环主体
		file << "\t#endif\n\n";
		file << "\t#if !defined(__pp_for_each_break_" << i << "__) && ((__pp_for_each_i__(" << i << ")) < (__pp_for_each_end_" << i << "__()))\n\n";
		file << "\t\t#define __pp_for_each_item_" << i << "__() __at_exp__(__pp_for_each_i__(" << i << "), __pp_for_each_list_" << i << "__())\n\n";
		file << "\t\t#include __pp_for_each_incl_file_" << i << "__()\n\n";
		file << "\t\t#undef __pp_for_each_item_" << i << "__\n";
		file << "\t\t#define __pp_expr_for_each_i__() __pp_for_each_i__(" << i << ") + 1\n";
		file << "\t\t#include __store_pp_for_each_i__(" << i << ")\n\n";
		file << "\t\t#define __pp_incl_file__() <ppmp/defs/incl/for_each/pp_for_each_" << i << ".h>\n";
		file << "\t\t#include __pp_incl__()\n\n";
		file << "\t#else\n\n";
		file << "\t\t#undef __pp_for_each_break_" << i << "__\n";
		file << "\t\t#undef __pp_for_each_i_" << i << "__\n";
		file << "\t\t#undef __pp_for_each_incl_file_" << i << "__\n";
		file << "\t\t#undef __pp_for_each_end_" << i << "__\n";
		file << "\t\t#undef __pp_for_each_begin_" << i << "__\n\n";
		file << "\t#endif\n\n";
		file << "#endif\n";
		file.close();
	}
}
