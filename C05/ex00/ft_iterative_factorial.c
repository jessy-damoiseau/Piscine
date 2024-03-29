/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:44:07 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/10 12:07:29 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		j = j * (i + 1);
		i++;
	}
	return (j);
}
