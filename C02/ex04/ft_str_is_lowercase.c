/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:12:48 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/05 15:51:26 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
	}
	if (!(str[i]))
		return (1);
	else
		return (0);
}
