/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operateur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:35:04 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/23 18:22:46 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_add(int i, int j)
{
	return (i + j);
}

int		ft_sous(int i, int j)
{
	return (i - j);
}

int		ft_power(int i, int j)
{
	return (i * j);
}

int		ft_div(int i, int j)
{
	return (i / j);
}

int		ft_mod(int i, int j)
{
	return (i % j);
}
