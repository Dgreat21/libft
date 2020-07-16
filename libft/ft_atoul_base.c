#include "libft.h"

static char		num(char c)
{
	int		n;
	char	*sys;

	n = 0;
	sys = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	while (sys[n])
	{
		if (sys[n] == c)
			return (n);
		n++;
	}
	return (0);
}

static int		sys(char c, int base)
{
	if (num(c) < base)
		return (1);
	else
		return (0);
}

uint64_t			ft_atoul_base(const char *s, int base)
{
	uint64_t	nb;
	int			i;
	uint64_t	pnb;

	i = 0;
	pnb = 0;
	nb = 0;
	while ((s[i] >= '\t' && s[i] <= '\r') || s[i] == ' ')
		i++;
	((s[i] == '+') || (s[i] == '-')) ? (i++) : (0);
	while (sys(s[i], base) && s[i])
	{
		pnb = nb;
		nb = nb * base + num(s[i]);
		i++;
		if (pnb != nb / base)
			return (-1);
	}
	return (nb);
}