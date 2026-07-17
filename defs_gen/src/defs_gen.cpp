#include "defs_gen.h"

#include <iostream>
#include <fstream>
#include <sstream>

/**
 * 生成defs/cat_noexp.h
 */
void ppmp::cat_noexp_gen(const std::string& path, int n)
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
	file << "#ifndef _PPMP_DEFS_CATNOEXP\n";
	file << "#define _PPMP_DEFS_CATNOEXP\n\n";
	file << "#define __cat_noexp__1(...) __VA_ARGS__\n";
	for(int i = 2; i <= n; ++i)
	{
		file << "#define __cat_noexp__" << i << "(";
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
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/full_scan.h
 */
void ppmp::scan_gen(const std::string& path, int n, int max_scan_level)
{
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_SCAN\n";
	file << "#define _PPMP_DEFS_SCAN\n\n";
	for(int i = 0; i < n; ++i)
	{
		std::string macro_base = "__scan_" + std::to_string(i) + "_intl__";
		file << "#define " << macro_base << "0(...) __VA_ARGS__\n";
		for(int level = 1; level <= max_scan_level; ++level)
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
void ppmp::inc_gen(const std::string& path, int n)
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
void ppmp::dec_gen(const std::string& path, int n)
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
void ppmp::at_gen(const std::string& path, int n)
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
	file << "#define __list_max_size__() " << n << "\n\n";
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
void ppmp::list_front_gen(const std::string& path, int n)
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
void ppmp::list_rest_gen(const std::string& path, int n)
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
void ppmp::placeholders_gen(const std::string& path, int n)
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
	file << "#define __sizeof_placeholders__()\\\n";
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
 * 生成defs/defer.h
 * 生成__defer__N系列宏，用于延迟展开
 */
void ppmp::defer_gen(const std::string& path, int pass)
{
	if(pass < 0)
	{
		std::cerr << "pass must be >= 0" << std::endl;
		return;
	}
	std::ofstream file(path);
	if(!file.is_open())
	{
		std::cerr << "failed to open file: " << path << std::endl;
		return;
	}
	file << "#ifndef _PPMP_DEFS_DEFER\n";
	file << "#define _PPMP_DEFS_DEFER\n\n";
	file << "#define __defer__0(...) __VA_ARGS__\n";
	file << "#define __defer__1(...) __VA_ARGS__ __empty__()\n";
	for(int i = 2; i <= pass; ++i)
	{
		file << "#define __defer__" << i << "(...) __defer__" << (i - 1) << "(__VA_ARGS__ __empty__)()\n";
	}
	file << "\n#endif";
	file.close();
}

/**
 * 生成defs/num_equal.h
 * 数值的相等判定
 */
void ppmp::num_equal_gen(const std::string& path, int n)
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
void ppmp::for_each_gen(const std::string& path, int n, int max_level)
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
		file << "#define __for_each_" << i << "_intl__(expand_macro, const_params, ...) ";
		file << "__for_each_" << i << "_intl__0(__sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __for_each_" << i << "_intl__" << level << "(end_idx, expand_macro, const_params, e, ...)\\\n";
				file << "\t__if_intl__(__not_equal__(end_idx, " << level << "))\\\n";
				file << "\t(\\\n";
				file << "\t\texpand_macro(" << level << ", 0, end_idx, const_params, e)\\\n";
				file << "\t\t__for_each_" << i << "_intl__" << (level + 1) << "(end_idx, expand_macro, __forward__(const_params), __VA_ARGS__)\\\n";
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
void ppmp::for_gen(const std::string& path, int n, int max_level)
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
		file << "__for_" << i << "_intl__0(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __for_" << i << "_intl__" << level << "(i, begin_idx, end_idx, expand_macro, const_params, ...)\\\n";
				file << "\t__if_intl__(__not_equal__(i, end_idx))\\\n";
				file << "\t(\\\n";
				file << "\t\texpand_macro(begin_idx, end_idx, i, const_params, __VA_ARGS__)\\\n";
				file << "\t\t__for_" << i << "_intl__" << (level + 1) << "(__inc__(i), begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__)\\\n";
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
void ppmp::while_gen(const std::string& path, int n, int max_level)
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
		file << "__while_" << i << "_intl__0(cond_macro, expand_macro, __forward__(const_params), __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __while_" << i << "_intl__" << level << "(cond_macro, expand_macro, const_params, ...)\\\n";
				file << "\t__if__(cond_macro(" << level << ", const_params, __VA_ARGS__))\\\n";
				file << "\t(\\\n";
				file << "\t\texpand_macro(" << level << ", const_params, __VA_ARGS__)\\\n";
				file << "\t\t__while_" << i << "_intl__" << (level + 1) << "(cond_macro, expand_macro, __forward__(const_params), __VA_ARGS__)\\\n";
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
void ppmp::for_recursive_gen(const std::string& path, int n, int max_level)
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
		file << "__for_recursive_" << i << "__0(begin_idx, begin_idx, end_idx, expand_macro, __forward__(const_params), 1, __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __for_recursive_" << i << "__" << level << "(i, begin_idx, end_idx, expand_macro, const_params, ...) ";
				file << "__for_recursive_" << i << "_intl__" << level << "(i, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__)\n";
				file << "#define __for_recursive_" << i << "_intl__" << level << "(i, begin_idx, end_idx, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, __not_equal__(i, end_idx)))\\\n";
				file << "\t(\\\n";
				//将expand_macro()的值展开后再传入下一次迭代，防止它作为一个整体被赋值给continue_iter
				file << "\t\t__for_recursive_" << i << "__" << (level + 1) << "(__inc__(i), begin_idx, end_idx, expand_macro, __forward__(const_params), expand_macro(i, begin_idx, end_idx, const_params, __VA_ARGS__)),\\\n";
				file << "\t\t__VA_ARGS__\\\n";
				file << "\t)\n";
			}
			else
			{
				file << "#define __for_recursive_" << i << "__" << max_level << "(i, begin_idx, end_idx, expand_macro, const_params, ...) ";
				file << "__for_recursive_" << i << "_intl__" << max_level << "(i, begin_idx, end_idx, expand_macro, __forward__(const_params), __VA_ARGS__)\n";
				file << "#define __for_recursive_" << i << "_intl__" << max_level << "(i, begin_idx, end_idx, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, __not_equal__(i, end_idx)))\\\n";
				file << "\t(\\\n";
				file << "\t\tFOR_RECURSIVE_" << i << "_OUT_OF_RANGE,\\\n";
				file << "\t\t__VA_ARGS__\\\n";
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
void ppmp::while_recursive_gen(const std::string& path, int n, int max_level)
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
		file << "__while_recursive_" << i << "__0(cond_macro, expand_macro, __forward__(const_params), 1, __VA_ARGS__)\n";
		for(int level = 0; level <= max_level; ++level)
		{
			if(level < max_level)
			{
				file << "#define __while_recursive_" << i << "__" << level << "(cond_macro, expand_macro, const_params, ...) ";
				file << "__while_recursive_" << i << "_intl__" << level << "(cond_macro, expand_macro, __forward__(const_params), __VA_ARGS__)\n";
				file << "#define __while_recursive_" << i << "_intl__" << level << "(cond_macro, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, cond_macro(" << level << ", const_params, __VA_ARGS__)))\\\n";
				file << "\t(\\\n";
				file << "\t\t__while_recursive_" << i << "__" << (level + 1) << "(cond_macro, expand_macro, __forward__(const_params), expand_macro(" << level << ", const_params, __VA_ARGS__)),\\\n";
				file << "\t\t__VA_ARGS__\\\n";
				file << "\t)\n";
			}
			else
			{
				file << "#define __while_recursive_" << i << "__" << max_level << "(cond_macro, expand_macro, const_params, ...) ";
				file << "__while_recursive_" << i << "_intl__" << max_level << "(cond_macro, expand_macro, __forward__(const_params), __VA_ARGS__)\n";
				file << "#define __while_recursive_" << i << "_intl__" << max_level << "(cond_macro, expand_macro, const_params, continue_iter, ...)\\\n";
				file << "\t__if_else_intl__(__and__(continue_iter, cond_macro(" << max_level << ", const_params, __VA_ARGS__)))\\\n";
				file << "\t(\\\n";
				file << "\t\tWHILE_RECURSIVE_" << i << "_OUT_OF_RANGE,\\\n";
				file << "\t\t__VA_ARGS__\\\n";
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
 * 生成defs/for_each_deferred.h
 * 生成__for_each_deferred__N系列宏
 * N从0到max_scan_level
 */
void ppmp::for_each_deferred_gen(const std::string& path, int max_scan_level)
{
    if(max_scan_level < 0)
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

    file << "#ifndef _PPMP_DEFS_FOREACHDEFERRED\n";
    file << "#define _PPMP_DEFS_FOREACHDEFERRED\n\n";

    for(int i = 0; i <= max_scan_level; ++i)
    {
        file << "#define __for_each_deferred__" << i << "(expand_macro, const_params, ...)\\\n";
        file << "\t__if_apply_intl__(__not_equal__(__sizeof__(__VA_ARGS__), 0))\\\n";
        file << "\t(\\\n";
        file << "\t\t__clause__\\\n";
        file << "\t\t(\\\n";
        file << "\t\t\t__full_scan__(" << i << ")(__for_each_deferred_intl__(0, __sizeof__(__VA_ARGS__), expand_macro, __forward__(const_params), __VA_ARGS__))\\\n";
        file << "\t\t)\\\n";
        file << "\t)\n";
    }

    file << "\n#endif\n";
    file.close();
}

/**
 * 生成defs/call_exp.h
 * 生成__call_exp__N系列宏
 * N从0到n
 * 用于调用宏并展开参数
 */
void ppmp::call_exp_gen(const std::string& path, int n)
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

    file << "#ifndef _PPMP_CALLEXP\n";
    file << "#define _PPMP_CALLEXP\n\n";

    for(int i = 0; i <= n; ++i)
    {
        file << "#define __call_exp__" << i << "(macro_name, ...) macro_name(__VA_ARGS__)\n";
    }

    file << "\n#endif\n";
    file.close();
}
