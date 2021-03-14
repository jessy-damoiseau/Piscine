/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:24:04 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/17 15:47:47 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_taille(int size, char **strs, char *sep)
{
	int i;
	int j;
	int k;
	int count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		k = 0;
		while (strs[i][j++])
			count++;
		if (i != size - 1)
		{
			while (sep[k++])
				count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*sortie;
	int		z;

	i = 0;
	z = 0;
	if (!(sortie = malloc(sizeof(*sortie) * (ft_taille(size, strs, sep) + 1))))
		return (NULL);
	while (i++ < size)
	{
		j = 0;
		k = 0;
		while (strs[i - 1][j++])
			sortie[z++] = strs[i - 1][j - 1];
		if (i - 1 != size - 1)
		{
			while (sep[k++])
				sortie[z++] = sep[k - 1];
		}
	}
	sortie[z] = '\0';
	return (sortie);
}
