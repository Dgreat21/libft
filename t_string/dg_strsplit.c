/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dg_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:59:26 by dgreat            #+#    #+#             */
/*   Updated: 2020/07/16 12:02:09 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_string.h"

void	dg_clear(t_string **tab, int num)
{
	while (num > 0)
	{
		free((tab[num]->s));
		num--;
	}
	free(*tab);
}

t_string *dg_strsplit(t_string s, char c)
{
	char **str;
	uint16_t words;
	int i;
	t_string *res;

	i = 0;
	words = dg_word_counter(s, c);
	str = ft_strsplit(s.s, c);
	res = malloc(sizeof(t_string) * words);
	while (words > 0)
	{
		dg_create_str(str[i]);
		i++;
		words--;
	}
	ft_clear(&str);
	return (res);
}
