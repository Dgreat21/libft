#include "t_string.h"

t_string dg_insert(t_string to, t_string from, uint32_t start, uint32_t len)
{
	t_string	tail;
	t_string	beg;
	t_string	mid;
	t_string	res;


	tail = dg_create_str(to.s +start);
	beg = dg_strndup(to, start);
	if (len < from.size)
	{
		mid = dg_strndup(from, len);
		res = dg_triplestrjoin(beg, mid, tail);
		dg_free(&mid);
	}
	else
		res = dg_triplestrjoin(beg, from, tail);
	dg_free(&beg);
	dg_free(&tail);
	return res;
}

t_string dg_insert_into(t_string *to, t_string from, uint32_t start,
		uint32_t len)
{
	t_string	tail;
	t_string	beg;
	t_string	mid;


	tail = dg_create_str(to->s +start);
	beg = dg_strndup(*to, start);
	if (len < from.size)
	{
		mid = dg_strndup(from, len);
		*to = dg_triplestrjoin(beg, mid, tail);
		dg_free(&mid);
	}
	else
		*to = dg_triplestrjoin(beg, from, tail);
	dg_free(&beg);
	dg_free(&tail);
	return *to;
}