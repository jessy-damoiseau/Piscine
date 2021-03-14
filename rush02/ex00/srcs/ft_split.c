/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 19:31:07 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/18 19:44:43 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			ft_sep(char c)
{
	int i;

	i = 0;
	if (c == '\n')
		return (1);
	return (0);
}

int			ft_count_word(char *str)
{
	int i;
	int n;
	int word;

	word = 0;
	n = 0;
	i = 0;
	while (str[i])
	{
		n = 0;
		while (str[i] && ft_sep(str[i]) == 1)
			i++;
		while (str[i] && ft_sep(str[i]) == 0 && ++n)
			i++;
		if (n > 0)
			word++;
	}
	return (word);
}

char		**ft_mem(char *str, char **re)
{
	int i;
	int n;
	int x;

	x = 0;
	i = 0;
	while (str[i])
	{
		n = 0;
		while (str[i] && ft_sep(str[i]) == 1)
			i++;
		while (str[i] && ft_sep(str[i]) == 0)
		{
			i++;
			n++;
		}
		if (!(re[x] = malloc(sizeof(char) * (n + 1))))
			return (0);
		x++;
	}
	return (re);
}

char		**ft_alloc(char *str, char **re, int i)
{
	int n;
	int x;
	int y;

	y = 0;
	i = 0;
	while (str[i])
	{
		x = 0;
		n = 0;
		while (str[i] && ft_sep(str[i]) == 1)
			i++;
		while (str[i] && ft_sep(str[i]) == 0 && ++n)
			i++;
		while (n > x)
		{
			re[y][x] = str[i - (n - x)];
			x++;
		}
		re[y][x] = '\0';
		y++;
	}
	return (re);
}

char		**ft_split(char *str)
{
	char	**re;
	char	*strc;
	int		i;

	i = 0;
	strc = str;
	if (strc == '\0')
		return (0);
	if (!(re = malloc(sizeof(char*) * (ft_count_word(str) + 1))))
		return (0);
	re = ft_mem(str, re);
	re = ft_alloc(str, re, i);
	re[ft_count_word(str)] = 0;
	return (re);
}
