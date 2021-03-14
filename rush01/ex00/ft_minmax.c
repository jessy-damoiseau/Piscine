/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:20:16 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/12 11:42:31 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_min(void)
{
	int *min;

	min = malloc(sizeof(int) * 17);
	min[0] = 1;
	min[1] = 2;
	min[2] = 3;
	min[3] = 4;
	min[4] = 2;
	min[5] = 1;
	min[6] = 4;
	min[7] = 3;
	min[8] = 3;
	min[9] = 4;
	min[10] = 1;
	min[11] = 2;
	min[12] = 4;
	min[13] = 3;
	min[14] = 2;
	min[15] = 1;
	return (min);
}

int	*ft_max(void)
{
	int *max;

	max = malloc(sizeof(int) * 17);
	max[0] = 4;
	max[1] = 3;
	max[2] = 2;
	max[3] = 1;
	max[4] = 3;
	max[5] = 4;
	max[6] = 1;
	max[7] = 2;
	max[8] = 2;
	max[9] = 1;
	max[10] = 4;
	max[11] = 3;
	max[12] = 1;
	max[13] = 2;
	max[14] = 3;
	max[15] = 4;
	return (max);
}
