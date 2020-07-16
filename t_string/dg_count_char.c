#include "t_string.h"

uint16_t dg_count(t_string str, int c)
{
	int len;
	uint16_t count;

	len = str.cur;
	count = 0;
	while(len)
	{
		if (str.s[len] == c)
			count++;
		len--;
	}
	return (count);
}

uint16_t pf_count(t_string str)
{
	int i;
	uint16_t count;

	i =0;
	count = 0;
	while(i < str.cur)
	{
		if (str.s[i] == '%' && str.s[i])
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}

