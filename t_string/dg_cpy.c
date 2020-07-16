#include "t_string.h"

t_string dg_cpy(t_string src, t_string dst)
{
	ft_strcpy_safe(dst.s, src.s);
	return (dst);
}