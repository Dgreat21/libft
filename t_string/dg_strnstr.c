/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dg_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:59:26 by dgreat            #+#    #+#             */
/*   Updated: 2020/07/16 12:02:09 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_string.h"

char	*dg_strnstr(t_string src, t_string find, size_t len)
{
	return (ft_strnstr(src.s, find.s, len));
}
