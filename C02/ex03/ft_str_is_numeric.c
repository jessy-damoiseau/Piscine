/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:09:39 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/04 19:22:49 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
	}
	if (!(str[i]))
		return (1);
	else
		return (0);
}
