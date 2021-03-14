/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:22:36 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/02 13:10:03 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char w, char x, char y)
{
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, &y, 1);
	if (w < '7' || x < '8')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '7')
		{
			c = b + 1;
			while (c <= '8')
			{
				ft_putchar(a, b, c);
				c++;
			}
			ft_putchar(a, b, c);
			b++;
		}
		ft_putchar(a, b, c);
		a++;
	}
}
