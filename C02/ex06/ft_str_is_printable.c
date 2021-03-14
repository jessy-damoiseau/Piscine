/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 13:44:33 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/05 17:44:11 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= ' ' && str[i] <= '~'))
	{
		i++;
	}
	if (!(str[i]))
		return (1);
	else
		return (0);
}
