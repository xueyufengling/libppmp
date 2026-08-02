#include "incl_gen.h"

#include <iostream>
#include <fstream>
#include <sstream>

void ppmp::pp_store_header_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& file_header_prot, const std::string& store_name, int max_op, int n)
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
	file << "#define __" << store_name << "_digit_max_num__(...) " << (n + 1) << "\n";
	file << "#define __" << store_name << "_digit_max_idx__(...) " << n << "\n";
	file << "#define __" << store_name << "_max_num__(...) " << (max_op + 1) << "\n";
	file << "#define __" << store_name << "_max_idx__(...) " << max_op << "\n\n";
	// 一位数字存取
	file << "#define __store_" << store_name << "_digit__(st, n) <__cat__(5," << file_prefix << store_name << ", _, st, _, n).h>\n";
	file << "#define __" << store_name << "_digit__(st, n) __cat__(5, __" << store_name << "_, st, _, n, __)()\n";
	// 数字整体存取
	file << "#define __store_" << store_name << "__(st) <__cat__(3," << file_prefix << store_name << ", _, st).h>\n";
	file << "#define __" << store_name << "__(st) __cat__(3, __" << store_name << "_, st, __)()\n\n";
	file << "#endif";
	file.close();
}

void ppmp::pp_store_expr_auto_undef_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name)
{
	std::string header_file_path = incl_path + file_prefix + expr_name + "_auto_undef.h";
	std::ofstream file(header_file_path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << header_file_path << std::endl;
		return;
	}
	file << "#if defined(__" << expr_name << "_auto_undef__)\n";
	file << "#if __" << expr_name << "_auto_undef__()\n";
	file << "#undef __" << expr_name << "__\n";
	file << "#endif\n";
	file << "#endif";
	file.close();
}

/**
 * 生成<defs_file_prefix>_<op>_<i>.h 系列文件
 * 每个文件定义__<store_name>_<op>_<i>__()宏，返回__<expr_name>__的计算结果第i位数字
 * i从0到n，其中0是个位，1是十位，依此类推。
 */
void ppmp::pp_store_digit_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name, const std::string& store_name, int max_op, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::string defs_file_prefix = incl_path + file_prefix + store_name;
	// 生成求值文件
	for(int op = 0; op < max_op; ++op)
	{
		for(int i = 0; i < n; ++i)
		{
			std::string path = defs_file_prefix + "_" + std::to_string(op) + "_" + std::to_string(i) + ".h";
			std::ofstream file(path);
			if(!file.is_open())
			{
				std::cerr << "failed to open file: " << path << std::endl;
				continue;
			}
			file << "#if defined(__" << expr_name << "__)\n\n";
			file << "#undef __" << store_name << "_" << op << "_" << i << "__\n\n";
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
					file << "#define __" << store_name << "_" << op << "_" << i << "__() 0\n";
					file << "#else\n"; // 若高位无非0有效数字，则当前的0定义为空
					file << "#define __" << store_name << "_" << op << "_" << i << "__()\n";
					file << "#endif\n";
				}
				else
				{
					file << "#elif " << div_expr << " % 10 == " << digit << "\n";
					file << "#define __" << store_name << "_" << op << "_" << i << "__() " << digit << "\n";
				}
			}
			file << "#endif\n\n";
			file << "#else\n\n";
			file << "#error \"store digit " << i << " in '" << store_name << "' " << op << " failed. expr '__" << expr_name << "__' not defined\"\n\n";
			file << "#endif\n";
			file.close();
		}
	}
}

/**
 * 生成<defs_file_prefix>_<i>.h系列文件
 * 每个文件定义__<store_name>_<i>__()宏，用于存储运算结果
 */
void ppmp::pp_store_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& expr_name, const std::string& store_name, int max_op, int n)
{
	if(max_op < 0 || n < 0)
	{
		std::cerr << "max_op and n must be >= 0" << std::endl;
		return;
	}
	std::string defs_file_prefix = incl_path + file_prefix + store_name;
	for(int op = 0; op < max_op; ++op)
	{
		std::string path = defs_file_prefix + "_" + std::to_string(op) + ".h";
		std::ofstream file(path);
		if(!file.is_open())
		{
			std::cerr << "failed to open file: " << path << std::endl;
			continue;
		}
		file << "#if defined(__" << expr_name << "__)\n";
		file << "\n#undef __" << store_name << "_" << op << "__\n\n";
		// 判0的快速路径
		file << "#if (__" << expr_name << "__()) == 0\n\n";
		file << "#define __" << store_name << "_" << op << "_0__() 0\n";
		for(int j = 1; j <= n; ++j)
		{
			file << "#define __" << store_name << "_" << op << "_" << j << "__()\n";
		}
		file << "\n#else\n\n";
		file << "#include <" << file_prefix << "store_" << store_name << ".h>\n\n";
		for(int i = 0; i < n; ++i)
		{
			file << "#include __store_" << store_name << "_digit__(" << op << ", " << i << ")\n";
		}
		file << "\n#endif\n\n";
		file << "#define __" << store_name << "_" << op << "__() __cat__(" << n << ", ";
		for(int j = n - 1; j >= 0; --j)
		{
			file << "__" << store_name << "_" << op << "_" << j << "__()";
			if(j > 0)
			{
				file << ", ";
			}
		}
		file << ")\n\n";
		file << "#include <" << file_prefix << expr_name << "_auto_undef.h>\n\n";
		file << "#else\n\n";
		file << "#error \"store '" << store_name << "' " << op << " failed. expr '__" << expr_name << "__' not defined\"\n\n";
		file << "#endif\n";
		file.close();
	}
}

/**
 * 生成<defs_file_prefix>_cmp_<i>_<j>.h系列文件
 * 比较__<store_name>_<i>__和__<store_name>_<j>__的大小关系
 * i和j从0到max_op
 */
void ppmp::pp_store_cmp_gen(const std::string& incl_path, const std::string& file_prefix, const std::string& file_header_prot, const std::string& store_name, int max_op)
{
	if(max_op < 0)
	{
		std::cerr << "max_op must be >= 0" << std::endl;
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
	for(int i = 0; i <= max_op; ++i)
	{
		for(int j = 0; j <= max_op; ++j)
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
			file << "#error \"cmp op " << i << " and op " << j << " failed. '__" << store_name << "_" << i << "__' or '__" << store_name << "_" << j << "__' not defined\"\n\n";
			file << "#endif\n";
			file.close();
		}
	}
}
