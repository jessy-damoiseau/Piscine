/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 09:15:53 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/12 17:21:05 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_init_ref(int *tab, int size)
{
	int i;

	i = 0;
	while (i++ < size + 1)
		tab[i - 1] = 0;
	return (tab);
}

int		*ft_atoi(char *str)
{
	int i;
	int *tab;
	int j;

	i = 0;
	while (str[i])
		i++;
	tab = malloc(sizeof(int) * (i + 1));
	tab = ft_init_ref(tab, i);
	if (i != 31)
		return (tab);
	i = 0;
	j = 0;
	while (i++ < 32)
	{
		if ((str[i - 1] >= '1' && str[i - 1] <= '4')
				&& (str[i] == ' ' || str[i] == '\0'))
			tab[j++] = str[i++ - 1] - '0';
		else
		{
			tab[0] = 0;
			return (tab);
		}
	}
	return (tab);
}
