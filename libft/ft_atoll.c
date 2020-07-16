#include "libft.h"

long long int 		ft_atoll(const char *s)
{
	long long int	nb;
	int				i;
	int				f;
	long long int	pnb;

	i = 0;
	f = 0;
	nb = 0;
	while ((s[i] >= '\t' && s[i] <= '\r') || s[i] == ' ')
		i++;
	if ((s[i] > 47 && s[i] < 58) || (s[i] == '+'))
		f++;
	else if (s[i] == '-')
		f--;
	((s[i] == '+') || (s[i] == '-')) ? (i++) : (0);
	while (s[i] > 47 && s[i] < 58)
	{
		pnb = nb;
		nb = nb * 10 + s[i] - '0';
		i++;
		if (pnb != nb / 10)
			return ((f > 0) ? -1 : 0);
	}
	return (nb * f);
}
