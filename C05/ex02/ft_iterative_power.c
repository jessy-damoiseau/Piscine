/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:23:09 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/09 15:33:29 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int j;

	i = 1;
	j = nb;
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb = nb * j;
		i++;
	}
	return (nb);
}
