#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/**
 * 生成defs/catn.h
 */
void catn_gen(const std::string& path, int n)
{
	if(n < 1)
	{
		std::cerr << "n must be >= 1" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_CATN\n";
	file << "#define _PPMP_DEFS_CATN\n\n";
	file << "#define __catn_intl__1(...) __VA_ARGS__\n";
	for(int i = 2; i <= n; ++i)
	{
		file << "#define __catn_intl__" << i << "(";
		for(int j = 0; j < i - 1; ++j)
		{
			file << "_" << j;
			if(j < i - 2)
			{
				file << ", ";
			}
		}
		if(i >= 2)
		{
			file << ", ";
		}
		file << "...) ";
		for(int j = 0; j < i - 1; ++j)
		{
			file << "_" << j;
			if(j < i - 2)
			{
				file << "##";
			}
		}
		if(i > 1)
		{
			file << "##";
		}
		file << "__VA_ARGS__\n";
	}
	file << "\n";
	for(int i = 1; i <= n; ++i)
	{
		file << "#define __catn__" << i << "(...) __catn_intl__" << i << "(__VA_ARGS__)\n";
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/full_scan.h
 */
void full_scan_gen(const std::string& path, int n = 16, int max_level = 16)
{
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_FULLSCAN\n";
	file << "#define _PPMP_DEFS_FULLSCAN\n\n";
	for(int i = 0; i < n; ++i)
	{
		std::string macro_base = "__full_scan_" + std::to_string(i) + "_intl__";
		file << "#define " << macro_base << "0(...) __VA_ARGS__\n";
		for(int level = 1; level <= max_level; ++level)
		{
			file << "#define " << macro_base << level << "(...) " << macro_base << (level - 1) << "(" << macro_base << (level - 1) << "(__VA_ARGS__))\n";
		}
		file << '\n';
	}
	file << "#endif";
	file.close();
}

/**
 * 生成defs/inc.h
 * 正溢出结果变为最小值‌
 */
void inc_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_INC\n";
	file << "#define _PPMP_DEFS_INC\n\n";
	for(int i = n; i >= 1; --i)
	{
		if(i == 1)
		{
			file << "#define __inc__n" << i << "() 0\n";
		}
		else
		{
			file << "#define __inc__n" << i << "() n" << (i - 1) << "\n";
		}
	}
	for(int i = 0; i <= n; ++i)
	{
		if(i == n)
		{
			file << "#define __inc__" << i << "() n" << n << "\n";
		}
		else
		{
			file << "#define __inc__" << i << "() " << (i + 1) << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/dec.h
 * 负溢出结果变为最大值
 */
void dec_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_DEC\n";
	file << "#define _PPMP_DEFS_DEC\n\n";
	for(int i = n; i >= 1; --i)
	{
		if(i == n)
		{
			file << "#define __dec__n" << i << "() " << n << "\n";
		}
		else
		{
			file << "#define __dec__n" << i << "() n" << (i + 1) << "\n";
		}
	}
	file << "#define __dec__0() n1\n";
	for(int i = 1; i <= n; ++i)
	{
		if(i == 1)
		{
			file << "#define __dec__" << i << "() 0\n";
		}
		else
		{
			file << "#define __dec__" << i << "() " << (i - 1) << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/at.h
 * 按索引取参数
 */
/**
 * 生成defs/at.h
 * 按索引取参数
 */
void at_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_AT\n";
	file << "#define _PPMP_DEFS_AT\n\n";
	file << "#define __at_max_idx__() " << n << "\n\n";
	for(int i = 0; i <= n; ++i)
	{
		file << "#define __at__" << i << "(";
		for(int j = 0; j <= i; ++j)
		{
			file << "_" << j;
			if(j < i)
			{
				file << ", ";
			}
		}
		if(i >= 0)
		{
			file << ", ";
		}
		file << "...) _";
		file << i << "\n";
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/list_front.h
 * 生成__list_front__N系列宏，取列表前N个元素
 */
void list_front_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_LISTFRONT\n";
	file << "#define _PPMP_DEFS_LISTFRONT\n\n";
	file << "#define __list_front__0(...)\n";
	for(int i = 1; i <= n; ++i)
	{
		file << "#define __list_front__" << i << "(";
		for(int j = 0; j < i; ++j)
		{
			file << "_" << j;
			if(j < i - 1)
			{
				file << ", ";
			}
		}
		if(i > 0)
		{
			file << ", ";
		}
		file << "...) ";
		for(int j = 0; j < i; ++j)
		{
			file << "_" << j;
			if(j < i - 1)
			{
				file << ", ";
			}
		}
		file << "\n";
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/list_rest.h
 * 生成__list_rest__N系列宏，取列表去掉前N个元素后的剩余部分
 */
void list_rest_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_LISTREST\n";
	file << "#define _PPMP_DEFS_LISTREST\n\n";
	for(int i = 0; i <= n; ++i)
	{
		file << "#define __list_rest__" << i << "(";
		for(int j = 0; j < i; ++j)
		{
			file << "_" << j;
			if(j < i - 1)
			{
				file << ", ";
			}
		}
		if(i > 0)
		{
			file << ", ";
		}
		file << "...) __VA_ARGS__\n";
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/placeholders.h
 * 生成占位符标记列表和数量列表
 */
void placeholders_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_PLACEHOLDERS\n";
	file << "#define _PPMP_DEFS_PLACEHOLDERS\n\n";
	file << "#define __is_list_placeholders__()\\\n";
	int total = n;  // n-1 个 1 + 1 个 0
	if(total == 0)
	{
		file << "\t0\n";
	}
	else
	{
		for(int i = 0; i < total; ++i)
		{
			if(i == 0)
			{
				file << "\t";
			}

			if(i == total - 1)
			{
				file << "0";
			}
			else
			{
				file << "1";
			}

			if(i < total - 1)
			{
				file << ", ";
				if((i + 1) % 16 == 0)
				{
					file << "\\\n\t";
				}
			}
			else
			{
				file << "\n";
			}
		}
	}
	file << "\n";
	file << "#define __numof_placeholders__()\\\n";
	for(int i = n; i >= 0; --i)
	{
		if(i == n)
		{
			file << "\t";
		}
		file << i;
		if(i > 0)
		{
			file << ", ";
			if((n - i + 1) % 16 == 0)
			{
				file << "\\\n\t";
			}
		}
		else
		{
			file << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/alias.h
 * 生成递归宏使用的别名
 */
void alias_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_ALIAS\n";
	file << "#define _PPMP_DEFS_ALIAS\n\n";
	file << "#define __0_pass_alias__(...) __VA_ARGS__\n";
	for(int i = 1; i <= n; ++i)
	{
		file << "#define __" << i << "_pass_alias__(...) __VA_ARGS__ ";
		if(i == 1)
		{
			file << "__empty__()()\n";
		}
		else
		{
			file << "__" << (i - 1) << "_pass_alias__(__empty__)()\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/num_equal.h
 * 数值的相等判定
 */
void num_equal_gen(const std::string& path, int n)
{
	if(n < 0)
	{
		std::cerr << "n must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_NUMEQUAL\n";
	file << "#define _PPMP_DEFS_NUMEQUAL\n\n";
	for(int i = -n; i <= n; ++i)
	{
		file << "#define __equal_def__";
		if(i < 0)
		{
			file << "n" << (-i);
		}
		else
		{
			file << i;
		}
		file << "(x) x\n";
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/for_each.h
 * 生成__for_each_n_intl__level系列宏
 * n从0到n，level从0到max_level
 */
void for_each_gen(const std::string& path, int n, int max_level)
{
	if(n < 0 || max_level < 0)
	{
		std::cerr << "n and max_level must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_FOREACH\n";
	file << "#define _PPMP_DEFS_FOREACH\n\n";
	for(int i = 0; i <= n; ++i)
	{
		file << "#define __for_each_" << i << "_intl__(expand_macro, const_params, e, ...) ";
		file << "__for_each_" << i << "_intl__0(__inc__(__numof__(__VA_ARGS__)), expand_macro, __pack_list__(const_params), e, __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __for_each_" << i << "_intl__" << level << "(end_idx, expand_macro, const_params, e, ...)\\\n";
				file << "\t__if_intl__(__not_equal__(end_idx, " << level << "))\\\n";
				file << "\t(\\\n";
				file << "\t\texpand_macro(" << level << ", 0, end_idx, const_params, e)\\\n";
				file << "\t\t__for_each_" << i << "_intl__" << (level + 1) << "(end_idx, expand_macro, __pack_list__(const_params), __VA_ARGS__)\\\n";
				file << "\t)\n";
			}
			else
			{
				file << "#define __for_each_" << i << "_intl__" << max_level << "(end_idx, expand_macro, const_params, e, ...)\\\n";
				file << "\t__if_intl__(__not_equal__(end_idx, " << max_level << "))\\\n";
				file << "\t(\\\n";
				file << "\t\tFOR_EACH_" << i << "_OUT_OF_RANGE\\\n";
				file << "\t)\n";
			}
		}
		if(i < n)
		{
			file << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/for.h
 * 生成__for_n_intl__level系列宏
 * n从0到n，level从0到max_level
 */
void for_gen(const std::string& path, int n, int max_level)
{
	if(n < 0 || max_level < 0)
	{
		std::cerr << "n and max_level must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_FOR\n";
	file << "#define _PPMP_DEFS_FOR\n\n";
	for(int i = 0; i <= n; ++i)
	{
		file << "#define __for_" << i << "_intl__(begin_idx, end_idx, expand_macro, const_params, ...) ";
		file << "__for_" << i << "_intl__0(begin_idx, begin_idx, end_idx, expand_macro, __pack_list__(const_params), __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __for_" << i << "_intl__" << level << "(i, begin_idx, end_idx, expand_macro, const_params, ...)\\\n";
				file << "\t__if_intl__(__not_equal__(i, end_idx))\\\n";
				file << "\t(\\\n";
				file << "\t\texpand_macro(begin_idx, end_idx, i, const_params, __VA_ARGS__)\\\n";
				file << "\t\t__for_" << i << "_intl__" << (level + 1) << "(__inc__(i), begin_idx, end_idx, expand_macro, __pack_list__(const_params), __VA_ARGS__)\\\n";
				file << "\t)\n";
			}
			else
			{
				file << "#define __for_" << i << "_intl__" << max_level << "(i, begin_idx, end_idx, expand_macro, const_params, ...)\\\n";
				file << "\t__if_intl__(__not_equal__(i, end_idx))\\\n";
				file << "\t(\\\n";
				file << "\t\tFOR_" << i << "_OUT_OF_RANGE\\\n";
				file << "\t)\n";
			}
		}
		if(i < n)
		{
			file << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/while.h
 * 生成__while_n_intl__level系列宏
 * n从0到n，level从0到max_level
 */
void while_gen(const std::string& path, int n, int max_level)
{
	if(n < 0 || max_level < 0)
	{
		std::cerr << "n and max_level must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_WHILE\n";
	file << "#define _PPMP_DEFS_WHILE\n\n";
	for(int i = 0; i <= n; ++i)
	{
		file << "#define __while_" << i << "_intl__(cond_macro, expand_macro, const_params, ...) ";
		file << "__while_" << i << "_intl__0(cond_macro, expand_macro, __pack_list__(const_params), __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __while_" << i << "_intl__" << level << "(cond_macro, expand_macro, const_params, ...)\\\n";
				file << "\t__if__(cond_macro(" << level << ", const_params, __VA_ARGS__))\\\n";
				file << "\t(\\\n";
				file << "\t\texpand_macro(" << level << ", const_params, __VA_ARGS__)\\\n";
				file << "\t\t__while_" << i << "_intl__" << (level + 1) << "(cond_macro, expand_macro, __pack_list__(const_params), __VA_ARGS__)\\\n";
				file << "\t)\n";
			}
			else
			{
				file << "#define __while_" << i << "_intl__" << max_level << "(cond_macro, expand_macro, const_params, ...)\\\n";
				file << "\t__if__(cond_macro(" << max_level << ", const_params, __VA_ARGS__))\\\n";
				file << "\t(\\\n";
				file << "\t\tWHILE_" << i << "_OUT_OF_RANGE\\\n";
				file << "\t)\n";
			}
		}
		if(i < n)
		{
			file << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/for_recursive.h
 * 生成__for_recursive_n_intl__level系列宏
 * n从0到n，level从0到max_level
 */
void for_recursive_gen(const std::string& path, int n, int max_level)
{
	if(n < 0 || max_level < 0)
	{
		std::cerr << "n and max_level must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_FORRECURSIVE\n";
	file << "#define _PPMP_DEFS_FORRECURSIVE\n\n";
	for(int i = 0; i <= n; ++i)
	{
		file << "#define __for_recursive_" << i << "_intl__(begin_idx, end_idx, expand_macro, const_params, ...) ";
		file << "__for_recursive_" << i << "__0(begin_idx, begin_idx, end_idx, expand_macro, __pack_list__(const_params), 1, __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __for_recursive_" << i << "__" << level << "(i, begin_idx, end_idx, expand_macro, const_params, ...) ";
				file << "__for_recursive_" << i << "_intl__" << level << "(i, begin_idx, end_idx, expand_macro, __pack_list__(const_params), __VA_ARGS__)\n";
				file << "#define __for_recursive_" << i << "_intl__" << level << "(i, begin_idx, end_idx, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, __not_equal__(i, end_idx)))\\\n";
				file << "\t(\\\n";
				//将expand_macro()的值展开后再传入下一次迭代，防止它作为一个整体被赋值给continue_iter
				file << "\t\t__for_recursive_" << i << "__" << (level + 1) << "(__inc__(i), begin_idx, end_idx, expand_macro, __pack_list__(const_params), expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)),\\\n";
				file << "\t\t__pack_list__(__VA_ARGS__)\\\n";
				file << "\t)\n";
			}
			else
			{
				file << "#define __for_recursive_" << i << "__" << max_level << "(i, begin_idx, end_idx, expand_macro, const_params, ...) ";
				file << "__for_recursive_" << i << "_intl__" << max_level << "(i, begin_idx, end_idx, expand_macro, __pack_list__(const_params), __VA_ARGS__)\n";
				file << "#define __for_recursive_" << i << "_intl__" << max_level << "(i, begin_idx, end_idx, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, __not_equal__(i, end_idx)))\\\n";
				file << "\t(\\\n";
				file << "\t\tFOR_RECURSIVE_" << i << "_OUT_OF_RANGE,\\\n";
				file << "\t\t__pack_list__(__VA_ARGS__)\\\n";
				file << "\t)\n";
			}
		}
		if(i < n)
		{
			file << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/while_recursive.h
 * 生成__while_recursive_n_intl__level系列宏
 * n从0到n，level从0到max_level
 */
void while_recursive_gen(const std::string& path, int n, int max_level)
{
	if(n < 0 || max_level < 0)
	{
		std::cerr << "n and max_level must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_WHILERECURSIVE\n";
	file << "#define _PPMP_DEFS_WHILERECURSIVE\n\n";
	for(int i = 0; i <= n; ++i)
	{
		file << "#define __while_recursive_" << i << "_intl__(cond_macro, expand_macro, const_params, ...) ";
		file << "__while_recursive_" << i << "__0(cond_macro, expand_macro, __pack_list__(const_params), 1, __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __while_recursive_" << i << "__" << level << "(cond_macro, expand_macro, const_params, ...) ";
				file << "__while_recursive_" << i << "_intl__" << level << "(cond_macro, expand_macro, __pack_list__(const_params), __VA_ARGS__)\n";
				file << "#define __while_recursive_" << i << "_intl__" << level << "(cond_macro, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, cond_macro(" << level << ", const_params, __VA_ARGS__)))\\\n";
				file << "\t(\\\n";
				file << "\t\t__while_recursive_" << i << "__" << (level + 1) << "(cond_macro, expand_macro, __pack_list__(const_params), expand_macro(" << level << ", const_params, __VA_ARGS__)),\\\n";
				file << "\t\t__pack_list__(__VA_ARGS__)\\\n";
				file << "\t)\n";
			}
			else
			{
				file << "#define __while_recursive_" << i << "__" << max_level << "(cond_macro, expand_macro, const_params, ...) ";
				file << "__while_recursive_" << i << "_intl__" << max_level << "(cond_macro, expand_macro, __pack_list__(const_params), __VA_ARGS__)\n";
				file << "#define __while_recursive_" << i << "_intl__" << max_level << "(cond_macro, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, cond_macro(" << max_level << ", const_params, __VA_ARGS__)))\\\n";
				file << "\t(\\\n";
				file << "\t\tWHILE_RECURSIVE_" << i << "_OUT_OF_RANGE,\\\n";
				file << "\t\t__pack_list__(__VA_ARGS__)\\\n";
				file << "\t)\n";
			}
		}
		if(i < n)
		{
			file << "\n";
		}
	}
	file << "\n#endif";
	file.close();
}

int main()
{
	const int max_num = 65535; //最大数字
	const int max_arg = 1024; //最大参数个数
	const int recursive_depth = 256;
	std::string output_dir = "D:/libppmp/include/ppmp/defs/";
	catn_gen(output_dir + "catn.h", max_arg);
	full_scan_gen(output_dir + "full_scan.h");
	inc_gen(output_dir + "inc.h", max_num);
	dec_gen(output_dir + "dec.h", max_num);
	at_gen(output_dir + "at.h", max_arg);
	placeholders_gen(output_dir + "placeholders.h", max_arg);
	alias_gen(output_dir + "alias.h", max_arg);
	num_equal_gen(output_dir + "num_equal.h", max_num);
	//循环宏
	for_each_gen(output_dir + "for_each.h", recursive_depth, max_arg);
	for_gen(output_dir + "for.h", recursive_depth, max_arg);
	while_gen(output_dir + "while.h", recursive_depth, max_arg);
	for_recursive_gen(output_dir + "for_recursive.h", recursive_depth, max_arg);
	while_recursive_gen(output_dir + "while_recursive.h", recursive_depth, max_arg);
	list_front_gen(output_dir + "list_front.h", max_arg);
	list_rest_gen(output_dir + "list_rest.h", max_arg);
	return 0;
}
