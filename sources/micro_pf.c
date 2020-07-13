#include "libft.h"

void	micro_pf(int num, bool spaces, ...)
{
	va_list argptr;

	if (!num)
		return ;
	va_start(argptr, num);
	while (num > 0)
	{
		ft_putstr(va_arg(argptr, char*));
		ft_putchar(' ');
		num--;
	}
	ft_putchar('\n');
	va_end(argptr);
}
