/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:00:47 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/12 15:14:32 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_number_view(int *map);
int	ft_tabcmp(int *s1, int *s2);
int	*ft_increment(int *nb);
int	*ft_max(void);
int	*ft_min(void);

int	*ft_placement(int *map, int *ref)
{
	int *max;

	map = malloc(sizeof(int) * 17);
	map = ft_min();
	max = ft_max();
	while (ft_tabcmp(ft_number_view(map), ref) != 0
			&& ft_tabcmp(map, max) != 0)
		ft_increment(map);
	return (map);
}
