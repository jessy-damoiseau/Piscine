/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 15:49:40 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/23 18:27:39 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_sign(char c)
{
	int		i;
	char	*tab;

	i = 0;
	tab = "+-*/%";
	while (tab[i] != c)
	{
		i++;
	}
	return (i);
}

int		ft_check_op(char c)
{
	char	*tab;
	int		i;

	i = 0;
	tab = "+-*/%";
	while (tab[i])
	{
		if (tab[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		do_op(int i, int j, int s)
{
	char	*tab;
	int		(*f[5])(int, int);

	tab = "+-*/%";
	f[0] = &ft_add;
	f[1] = &ft_sous;
	f[2] = &ft_power;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	return (f[s](i, j));
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int s;

	if (argc != 4)
		return (0);
	if (!ft_check_op(*argv[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	s = ft_sign(*argv[2]);
	i = ft_atoi(argv[1]);
	j = ft_atoi(argv[3]);
	if ((s == 3 && j == 0) || (s == 4 && j == 0))
	{
		if (s == 3)
			write(1, "Stop : division by zero\n", 24);
		else
			write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(do_op(i, j, s));
	write(1, "\n", 1);
	return (0);
}
