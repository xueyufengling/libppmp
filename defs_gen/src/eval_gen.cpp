#include "eval_gen.h"

#include <iostream>
#include <fstream>
#include <sstream>

/**
 * 生成defs/eval/pp_store_op_digit_<op>_<i>.h 系列文件
 * 每个文件定义__pp_op_<op>_<i>__()宏，返回__pp_expr__的计算结果第i位数字
 * i从0到n，其中0是个位，1是十位，依此类推。
 */
void ppmp::pp_store_op_digit_gen(const std::string& path_prefix, int max_op, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	// 记录最大支持的位数n
	std::string info_path = path_prefix + "info.h";
	std::ofstream file(info_path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << info_path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_EVAL_PPSTOREOPDIGITINFO\n";
	file << "#define _PPMP_DEFS_EVAL_PPSTOREOPDIGITINFO\n\n";
	file << "#define __pp_max_digit_num__(...) " << (n + 1) << "\n";
	file << "#define __pp_max_digit_idx__(...) " << n << "\n";
	file << "\n#endif";
	file.close();
	// 生成求值文件
	for(int op = 0; op < max_op; ++op)
	{
		for(int i = 0; i < n; ++i)
		{
			std::string path = path_prefix + std::to_string(op) + "_" + std::to_string(i) + ".h";
			std::ofstream file(path);
			if(!file.is_open())
			{
				std::cerr << "failed to open file: " << path << std::endl;
				continue;
			}
			file << "#if defined(__pp_expr__)\n\n";
			file << "#undef __pp_op_" << op << "_" << i << "__\n\n";
			// 判0的快速路径
			file << "#if (__pp_expr__()) == 0\n\n";
			file << "#define __pp_op_" << op << "_0__() 0\n";
			for(int j = 1; j <= n; ++j)
			{
				file << "#define __pp_op_" << op << "_" << j << "__()\n";
			}
			file << "\n#else\n\n";
			// 非0的路径
			std::string div_expr;
			if(i == 0)
			{
				div_expr = "(__pp_expr__())";
			}
			else
			{
				div_expr = "((__pp_expr__()) / 1" + std::string(i, '0') + ")";
			}
			for(int digit = 0; digit <= 9; ++digit)
			{
				if(digit == 0)
				{
					file << "#if " << div_expr << " % 10 == 0\n";
					file << "#if " << div_expr << " >= 10\n";
					file << "#define __pp_op_" << op << "_" << i << "__() 0\n";
					file << "#else\n";
					file << "#define __pp_op_" << op << "_" << i << "__()\n";
					file << "#endif\n";
				}
				else
				{
					file << "#elif " << div_expr << " % 10 == " << digit << "\n";
					file << "#define __pp_op_" << op << "_" << i << "__() " << digit << "\n";
				}
			}
			file << "#endif\n\n";
			file << "#endif\n\n";
			file << "#include \"../../eval/intl/expr_auto_undef.h\"\n\n";
			file << "#else\n\n";
			file << "#error \"store digit " << i << " in op " << op << " failed. expr '__pp_expr__' not defined\"\n\n";
			file << "#endif\n";
			file.close();
		}
	}
}

/**
 * 生成eval/pp_store_op_i.h系列文件
 * 每个文件定义__pp_op_i__()宏，用于存储运算结果
 */
void ppmp::pp_store_op_gen(const std::string& path_prefix, int max_op, int n)
{
	if(max_op < 0 || n < 0)
	{
		std::cerr << "max_op and n must be >= 0" << std::endl;
		return;
	}
	for(int op = 0; op < max_op; ++op)
	{
		std::string path = path_prefix + std::to_string(op) + ".h";
		std::ofstream file(path);
		if(!file.is_open())
		{
			std::cerr << "failed to open file: " << path << std::endl;
			continue;
		}
		file << "#if defined(__pp_expr__)\n";
		file << "\n#undef __pp_op_" << op << "__\n\n";
		file << "#include \"../../eval/pp_op.h\"\n\n";
		for(int i = 0; i < n; ++i)
		{
			file << "#include __pp_store_op_digit__(" << op << ", " << i << ")\n";
		}
		file << "\n#define __pp_op_" << op << "__() ";
		for(int j = n - 1; j >= 0; --j)
		{
			file << "__pp_op_" << op << "_" << j << "__()";
			if(j > 0)
			{
				file << "##";
			}
		}
		file << "\n\n";
		file << "#else\n\n";
		file << "#error \"store op " << op << " failed. expr '__pp_expr__' not defined\"\n\n";
		file << "#endif\n";
		file.close();
	}
}
