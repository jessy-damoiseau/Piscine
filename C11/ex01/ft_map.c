/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:11:01 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/23 15:43:37 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *dest;

	i = 0;
	if (!(dest = malloc(sizeof(*dest) * length)))
		return (NULL);
	while (i <= length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}
