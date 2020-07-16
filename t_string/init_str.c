/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:19:50 by dgreat            #+#    #+#             */
/*   Updated: 2020/07/16 12:02:09 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <t_string.h>

//Only init size and malloc size
t_string	dg_init_str(uint32_t size)
{
	t_string str;

	str.s = ft_strnew(size);
	str.size = size;
	return (str);
}


//Init and create str
t_string	dg_prototype_str(uint32_t size, char *s)
{
	t_string str;

	str.size = size;
	str.cur = ft_strlen(s);
	str.s = ft_strnew(size);
	ft_strncpy(str.s, s, (str.cur > str.size) ? (str.cur) : (str.size));
	return (str);
}

//Init and duplicate str without
t_string	dg_create_str(char *s)
{
	t_string str;

	str.cur = ft_strlen(s);
	str.size = str.cur;
	str.s = ft_strdup_safe(s);
	return (str);
}

//Init and copy pointer
t_string	dg_copy_str(char *s)
{
	t_string str;

	str.cur = ft_strlen(s);
	str.size = str.cur;
	str.s = s;
	return (str);
}
