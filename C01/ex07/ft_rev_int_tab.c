/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 11:36:02 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/03 15:45:21 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tempon;

	i = 0;
	j = size;
	while (i != j)
	{
		tempon = tab[i];
		tab[i] = tab[j];
		tab[j] = tempon;
		i++;
		j--;
	}
}
