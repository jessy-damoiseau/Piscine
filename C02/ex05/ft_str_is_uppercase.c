/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:15:17 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/04 19:22:05 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
	}
	if (!(str[i]))
		return (1);
	else
		return (0);
}
