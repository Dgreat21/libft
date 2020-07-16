#include "t_string.h"

void dg_append(t_string *s1, t_string s2)
{
	t_string cpy;

	cpy = dg_strdup(*s1);
	dg_free(s1);
	*s1 = dg_strjoin(cpy, s2);
	dg_free(&cpy);
}