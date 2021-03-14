/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:11:12 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/10 12:59:08 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *c)
{
	int j;

	j = 0;
	while (c[j])
	{
		write(1, &c[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc - 1)
		i++;
	while (i > 0)
	{
		ft_putstring(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
