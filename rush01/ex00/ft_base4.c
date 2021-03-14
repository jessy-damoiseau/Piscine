/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:52:39 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/12 13:49:30 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_validity_col(int *nb);
int	ft_validity_row(int *nb);
int	*ft_increment(int *nb);

int	*ft_base4(int *nb)
{
	nb = ft_increment(nb);
	while (ft_validity_col(nb) == 0 || ft_validity_row(nb) == 0)
	{
		nb = ft_increment(nb);
	}
	return (nb);
}

int	*ft_increment(int *nb)
{
	int i;
	int k;

	k = 0;
	while (k < 2)
	{
		i = 0;
		while (nb[i])
			i++;
		i--;
		nb[i] += 1;
		while (nb[i] == 5)
		{
			nb[i] = 1;
			nb[i - 1]++;
			i--;
		}
		k = ft_validity_col(nb) + ft_validity_row(nb);
	}
	return (nb);
}

/*
** La boucle i fixe une colonne
** La boucle j fixe un numero de la colonne
** La boucle k compare a partir du numero precedent
*/

int	ft_validity_col(int *nb)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 3)
		{
			k = 1;
			while (k++ + j < 5)
			{
				if (nb[i - 1 + 4 * (j - 1)] ==
						nb[i - 1 + 4 * (j - 1) + 4 * (k - 1)])
					return (0);
			}
		}
	}
	return (1);
}

/*
** La boucle i fixe une ligne
** La boucle j fixe un numero de la ligne
** La boucle k compare a partir du numero precedent
*/

int	ft_validity_row(int *nb)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 3)
		{
			k = 1;
			while (k++ + j < 5)
			{
				if (nb[4 * (i - 1) + j - 1] == nb[4 * (i - 1) + j - 1 + k - 1])
					return (0);
			}
		}
	}
	return (1);
}
