/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:28:19 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/10 10:06:21 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	return (ft_recursive_power(nb, power - 1) * nb);
}
