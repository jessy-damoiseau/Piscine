/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:45:17 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/17 13:36:18 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

char					*ft_strdup(char *str)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	if (!(dest = malloc(sizeof(*dest) * (len + 1))))
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s_av;
	int				i;

	i = 0;
	if (!(s_av = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (av[i] && i < ac)
	{
		s_av[i].size = ft_strlen(av[i]);
		s_av[i].str = av[i];
		s_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_av[i].size = 0;
	s_av[i].str = 0;
	s_av[i].copy = 0;
	return (s_av);
}
