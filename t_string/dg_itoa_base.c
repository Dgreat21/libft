#include "t_string.h"

t_string dg_itoa_base(int num, int base)
{
	return dg_copy_str(ft_itoa_base(num, base));
}