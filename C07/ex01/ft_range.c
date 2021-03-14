/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:04:30 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/13 11:36:08 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (max <= min)
		return ((void*)0);
	tab = malloc(sizeof(*tab) * (max - min));
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
