/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dg_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:59:26 by dgreat            #+#    #+#             */
/*   Updated: 2020/07/16 12:02:09 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_string.h"

t_string dg_strjoin(t_string s1, t_string s2)
{
	return (dg_copy_str(ft_strjoin(s1.s, s2.s)));
}

t_string dg_triplestrjoin(t_string s1, t_string s2, t_string s3)
{
	return (dg_copy_str(ft_triplestrjoin(s1.s, s2.s, s3.s)));
}
