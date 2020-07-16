#include "t_string.h"

void dg_append(t_string *s1, t_string s2)
{
	t_string cpy;

	cpy = dg_strdup(*s1);
	dg_free(s1);
	*s1 = dg_strjoin(cpy, s2);
	dg_free(&cpy);
}

void dg_append_char(t_string *s1, int c)
{
	t_string cpy;

	cpy = dg_strdup(*s1);
	dg_free(s1);
	*s1 = dg_init_str(cpy.size + 1);
	dg_cpy(cpy, *s1);
	s1->s[s1->size - 1] = c;
	s1->s[s1->size ] = '\0';
	dg_free(&cpy);
}