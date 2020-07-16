/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dg_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:59:26 by dgreat            #+#    #+#             */
/*   Updated: 2020/07/16 12:02:09 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_string.h"

t_string dg_strsub(t_string s, unsigned int start, size_t len)
{
	return (dg_create_str(ft_strsub(s.s, start, len)));
}
