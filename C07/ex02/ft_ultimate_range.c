/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:59:04 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/16 12:08:18 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = malloc(sizeof(**range) * (max - min))))
		return (-1);
	while (min < max)
	{
		*((*range) + i) = min;
		min++;
		i++;
	}
	return (i);
}
