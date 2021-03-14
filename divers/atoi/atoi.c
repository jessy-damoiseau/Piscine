/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 09:03:27 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/10 10:25:15 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int count = 0;

	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == ' '))
	{
				i++;
	}
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
			if (str[i] == '-')
				sign *= -1;
			i++;	
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		count = count * 10 + str[i] - '0';
		i++;
	}
	return (count * sign);
}
 int main(void)
 {
	printf("%d", ft_atoi("     45    --+++-++--++--+4645562dj"));
 }
