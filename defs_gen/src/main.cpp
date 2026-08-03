#include "defs_gen.h"
#include "incl_gen.h"

using namespace ppmp;

void defs_gen(std::string incl_path, const int max_num, const int list_max_size, const int alias_overload, const int recursive_depth)
{
	scan_gen(incl_path, alias_overload);
	call_exp_gen(incl_path, alias_overload);
	//算术
	inc_gen(incl_path, max_num);
	dec_gen(incl_path, max_num);
	num_equal_gen(incl_path, max_num);
	//列表操作
	cat_noexp_gen(incl_path, list_max_size);
	cat_front_noexp_gen(incl_path, list_max_size);
	at_gen(incl_path, list_max_size);
	placeholders_gen(incl_path, list_max_size);
	list_front_gen(incl_path, list_max_size);
	list_rest_gen(incl_path, list_max_size);
	defer_gen(incl_path, list_max_size);
	//循环宏
	repeat_gen(incl_path, alias_overload);
	for_each_gen(incl_path, alias_overload);
	for_gen(incl_path, alias_overload);
	while_gen(incl_path, alias_overload);
	for_recursive_gen(incl_path, alias_overload, recursive_depth);
	while_recursive_gen(incl_path, alias_overload, recursive_depth);
}

// PP求值
void incl_gen(std::string incl_path, const int max_op, int max_digit_num)
{
	pp_store_op_gen(incl_path, max_op, max_digit_num);
	pp_for_gen(incl_path, max_op, max_digit_num);
	pp_while_gen(incl_path, max_op, max_digit_num);
}

int main()
{
	// 需要提前创建好文件夹
	const int max_num = 256; //最大数字
	const int list_max_size = max_num; //最大参数个数
	const int alias_overload = 16;
	const int recursive_depth = 256;
	std::string incl_path = "D:/libppmp/include/";
	defs_gen(incl_path, max_num, list_max_size, alias_overload, recursive_depth);

	const int max_op = 16; //最多2个操作数
	const int max_digit_num = 19;
	incl_gen(incl_path, max_op, max_digit_num);
	return 0;
}
