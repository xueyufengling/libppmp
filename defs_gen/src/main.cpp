#include "defs_gen.h"

using namespace ppmp;

int main()
{
	const int max_num = 256; //最大数字
	const int list_max_size = max_num; //最大参数个数
	const int alias_overload = 16;
	const int recursive_depth = 256;
	std::string output_dir = "D:/libppmp/include/ppmp/defs/";

	scan_gen(output_dir + "scan.h", alias_overload);
	call_exp_gen(output_dir + "call_exp.h", alias_overload);
	//算术
	inc_gen(output_dir + "inc.h", max_num);
	dec_gen(output_dir + "dec.h", max_num);
	num_equal_gen(output_dir + "num_equal.h", max_num);
	//列表操作
	cat_noexp_gen(output_dir + "cat_noexp.h", list_max_size);
	at_gen(output_dir + "at.h", list_max_size);
	placeholders_gen(output_dir + "placeholders.h", list_max_size);
	list_front_gen(output_dir + "list_front.h", list_max_size);
	list_rest_gen(output_dir + "list_rest.h", list_max_size);
	defer_gen(output_dir + "defer.h", list_max_size);
	//循环宏
	for_each_gen(output_dir + "for_each.h", alias_overload, recursive_depth);
	for_gen(output_dir + "for.h", alias_overload, recursive_depth);
	while_gen(output_dir + "while.h", alias_overload, recursive_depth);
	for_recursive_gen(output_dir + "for_recursive.h", alias_overload, recursive_depth);
	while_recursive_gen(output_dir + "while_recursive.h", alias_overload, recursive_depth);
	//延迟循环宏
	for_each_deferred_gen(output_dir + "for_each_deferred.h", alias_overload);
	return 0;
}
