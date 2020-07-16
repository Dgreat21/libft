#include "t_string.h"

void	dg_free(t_string *str)
{
	free(str->s);
	str->s = NULL;
	return ;
}