/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdamoise <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:19:54 by jdamoise          #+#    #+#             */
/*   Updated: 2020/07/22 15:08:28 by jdamoise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int		ft_checkbase(char *base, int len)
{
	int j;
	int i;

	i = 0;
	if (len <= 1)
		return (1);
	while (base[i++])
		if (base[i - 1] == '-' || base[i - 1] == '+'
				|| (base[i - 1] >= 9 && base[i - 1] < 13) || base[i - 1] == 32)
			return (1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j++])
			if (base[j - 1] == base[i])
				return (1);
		i++;
	}
	return (0);
}

int		ft_checkstrtobase(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	while (str[i] == '-' || str[i] == '+'
				|| (str[i] >= 9 && str[i] < 13) || str[i] == 32)
		i++;
	while (str[i])
	{
		j = 0;
		while (base[j] && str[i] != base[j])
			j++;
		if (base[j] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int		ft_convert(int len, char *base, char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		result = result * len + get_nb(str[i], base);
		i++;
	}
	return (result * sign);
}

int		ft_atoi_base(char *str, char *base)
{
	int len;

	len = 0;
	while (base[len])
		len++;
	return (ft_convert(len, base, str));
}
