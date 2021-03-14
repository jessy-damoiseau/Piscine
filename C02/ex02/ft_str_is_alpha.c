/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 12:15:13 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/05 22:07:10 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] && ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z')))
		i++;
	if (!(str[i]))
		return (1);
	else
		return (0);
}
