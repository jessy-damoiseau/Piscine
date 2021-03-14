/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:33:08 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/07 18:16:59 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	if (size != 0)
	{
		while (dest[i] && i < size)
			i++;
		j = 0;
		while (src[j] && j + i < size - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		if (j + i < size)
			dest[j + i] = '\0';
	}
	k = 0;
	while (src[k])
		k++;
	return (k + i);
}
