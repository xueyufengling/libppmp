#include "defs_gen.h"

using namespace ppmp;

int main()
{
	const int max_num = 256; //最大数字
	const int max_arg = 256; //最大参数个数
	const int loop_overload = 16;
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
	for_each_gen(output_dir + "for_each.h", loop_overload, recursive_depth);
	for_gen(output_dir + "for.h", loop_overload, recursive_depth);
	while_gen(output_dir + "while.h", loop_overload, recursive_depth);
	for_recursive_gen(output_dir + "for_recursive.h", loop_overload, recursive_depth);
	while_recursive_gen(output_dir + "while_recursive.h", loop_overload, recursive_depth);
	list_front_gen(output_dir + "list_front.h", max_arg);
	list_rest_gen(output_dir + "list_rest.h", max_arg);
	return 0;
}
