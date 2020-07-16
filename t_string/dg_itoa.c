#include "t_string.h"

t_string dg_itoa(int num)
{
	return dg_copy_str(ft_itoa(num));
}