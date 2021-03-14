/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 21:21:18 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/07 15:21:32 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa(unsigned char nb)
{
	char *hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[nb / 16]);
	ft_putchar(hexa[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			write(1, "\\", 1);
			hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
