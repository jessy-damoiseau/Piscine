/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:20:33 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/22 15:02:50 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_atoi_base(char *str, char *base);
int		ft_checkbase(char *base, int len);
int		ft_checkstrtobase(char *str, char *base);
int		ft_convert(int len, char *base, char *str);
int		get_nb(char c, char *base);

char	*ft_conv(int len, char *base, long int nbr, int len_int)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = malloc(sizeof(char) * (len_int + 1))))
		return (0);
	if (nbr == 0)
	{
		res[i] = base[i];
		res[i + 1] = '\0';
		return (res);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		res[i] = ('-');
	}
	i = len_int - 1;
	while (nbr)
	{
		res[i--] = base[nbr % len];
		nbr /= len;
	}
	res[len_int] = '\0';
	return (res);
}

int		get_nb_len(int size, int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= size;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*c;
	int		len;
	int		len2;
	int		len_int;
	int		n;

	len = 0;
	len2 = 0;
	while (base_from[len2])
		len2++;
	while (base_to[len])
		len++;
	if (ft_checkbase(base_to, len) || ft_checkbase(base_from, len2)
			|| ft_checkstrtobase(nbr, base_from))
		return (0);
	n = ft_atoi_base(nbr, base_from);
	len_int = get_nb_len(len, n);
	if (!(c = malloc(sizeof(c) * len_int + 1)))
		return (0);
	c = ft_conv(len, base_to, n, len_int);
	return (c);
}
