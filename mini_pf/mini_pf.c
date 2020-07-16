#include "t_string.h"



t_string pf_selector(char *ptr, va_list arg)
{
	if (*(ptr + 1) == 's')
		return (dg_create_str(va_arg(arg, char*)));
	else if (*(ptr + 1) == 'i')
		return (dg_itoa(va_arg(arg, int)));

	return dg_create_str("__________");
}

void	pf_append_unformat(t_string *res, char *ptr, t_string str)
{
	static uint32_t shift;
	static uint32_t added;
	t_string sub;

	sub = dg_strsub(str, shift + added, ptr - str.s);
	added = sub.size;
	dg_append(res, sub);
	dg_append_char(res,'\n');
	shift += 2;
	dg_free(&sub);
}

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
		ptr = dg_shstrchr(&str, '%');
		pf_append_unformat(&res, ptr, str);
		dg_append(&res, pf_selector(ptr, arg));
		dg_append_char(&res, '\n');
	}
	ft_putstr(res.s);
}
