#include "libft.h"

void	micro_pf(int num, bool spaces, ...)
{
	va_list argptr;
	char *str;

	if (!num)
		return ;
	va_start(argptr, num);
	while (num > 0)
	{
		str = va_arg(argptr, char*);
		if (str != NULL)
			ft_putstr(str);
		(spaces) ? ft_putchar(' ') : (0);
		num--;
	}
	ft_putchar('\n');
	va_end(argptr);
}
