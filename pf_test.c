#include "mini_pf.h"
#include <time.h>
int main()
{
//	mini_pf("");
	t_string test_string, test_append;

	test_string = dg_create_str("\0");
	test_append = dg_create_str("67890");
	dg_append(&test_string, test_append);
	printf("%s, %i, %i\n", test_string.s, test_string.cur, test_string.size);
	dg_free(&test_string);
	sleep(10);
	return 0;
}