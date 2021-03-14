/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 18:45:54 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/15 09:15:01 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_checkbase(char *base, int len)
{
	int j;
	int i;

	i = 0;
	if (len <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_convert(int len, char *base, long int nbr)
{
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= len)
	{
		ft_convert(len, base, nbr / len);
		nbr %= len;
	}
	ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;
	int i;

	i = 0;
	len = 0;
	while (base[len])
		len++;
	if (ft_checkbase(base, len))
		return ;
	ft_convert(len, base, nbr);
}
