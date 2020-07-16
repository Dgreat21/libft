/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dg_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:59:26 by dgreat            #+#    #+#             */
/*   Updated: 2020/07/16 12:02:09 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_string.h"

char	*dg_shstrchr(t_string *str, int c)
{
	char *ptr;
	ptr = ft_memchr(str->s + str->shift, c, str->size);
	str->shift = ptr - str->s + 1;
	return (ptr);
}

char	*dg_strchr(t_string str, int c)
{
	return (ft_memchr(str.s, c, str.size));
}
