/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:50:13 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/12 09:31:13 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int *ft_recup_view(int *map, int pv, int i);

/*
** Determine le nombre de caisses vue depuis chaque point de vues
** Retourne un tableau d'entiers similaires a l'input pour comparer
*/

int	*ft_number_view(int *map)
{
	int *view;
	int i;
	int *temp;
	int j;

	temp = malloc(sizeof(int) * 5);
	view = malloc(sizeof(int) * 17);
	i = 0;
	while (i++ < 16)
	{
		view[i - 1] = 5;
		temp = ft_recup_view(map, i - 1, 0);
		j = 0;
		if (temp[0] == 2 && temp[1] == 1 && temp[2] == 4 && temp[3] == 3)
			view[i - 1] = 2;
		else
		{
			while (j++ < 4)
			{
				if (5 - (temp[j - 1] - (j - 1)) < view[i - 1])
					view[i - 1] = 5 - (temp[j - 1] - (j - 1));
			}
		}
	}
	return (view);
}

/*
** Recupere la vue depuis chaque point de vue de telle sorte que
** 1234 vue par la droite donne 4321
** La premiere condition donne le point de chaque col de haut en bas
** La deuxieme de bas en haut
** la troisieme pour les lignes de gauche a droite
** la derniere pour de droite a gauche
*/

int	*ft_recup_view(int *map, int pv, int i)
{
	int *temp;

	temp = malloc(sizeof(int) * 5);
	if (pv / 8 == 0 && pv % 8 < 4)
	{
		while (i++ < 4)
			temp[i - 1] = map[4 * (i - 1) + pv % 4];
	}
	else if (pv / 8 == 0 && pv % 8 >= 4)
	{
		while (i++ < 4)
			temp[i - 1] = map[4 * (4 - i) + pv % 4];
	}
	else if (pv / 8 == 1 && pv % 8 < 4)
	{
		while (i++ < 4)
			temp[i - 1] = map[(pv % 4) * 4 + i - 1];
	}
	else
	{
		while (i++ < 4)
			temp[i - 1] = map[(pv % 4) * 4 + 4 - i];
	}
	return (temp);
}
