#include "t_string.h"

t_string	dg_strndup(t_string s, uint32_t len)
{
	return (dg_copy_str(ft_strndup(s.s, len)));
}
