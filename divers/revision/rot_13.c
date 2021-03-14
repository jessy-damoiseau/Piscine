/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   road_13.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:18:05 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/10 13:30:59 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_test(char test)
{
	if ((test >= 'a' && test <= 'n') || (test >= 'A' && test <= 'N'))
		return (1);
	else
		return (0);
}

void ft_road_13(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (ft_test(str[i]))
			str[i] += 13;
		else
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	ft_road_13("bonjour");
	return (0);
}
