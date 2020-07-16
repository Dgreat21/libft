#include "t_string.h"



//char 	*pf_selector(char *ptr)
//{
//	if (*(ptr + 1) == 's')
////		return ();
////	return ();
//}

int		mini_pf(const char *format, ...)
{
	t_string str;
	t_string res;
	char *ptr;
	int num;
	va_list arg;

	res = dg_create_str("\0");
	str = dg_create_str(format);
	num = pf_count(str);
	va_start(arg, num);
	while (num-- > 0)
	{
		ptr = dg_strchr(str, '%');

	}
}
