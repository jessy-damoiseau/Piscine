/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpaul <gpaul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:44:23 by gpaul             #+#    #+#             */
/*   Updated: 2020/07/18 20:22:00 by gpaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		nb_char_file(void)
{
	int		fd;
	char	buffer[1];
	int		i;

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while ((read(fd, &buffer, 1)))
	{
		i++;
	}
	close(fd);
	return (i);
}

char	*ft_alloca(void)
{
	int		size;
	int		i;
	char	*str;
	int		fd;
	char	buffer;

	i = 0;
	size = nb_char_file();
	str = malloc(sizeof(char) * size);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while ((read(fd, &buffer, 1)))
	{
		str[i] = buffer;
		i++;
	}
	return (str);
}

void	ft_print(char **re, int nb)
{
	int i;

	i = 0;
	while (re[nb][i - 1] != ':')
	i++;
	while (re[nb][i] == ' ' || (re[nb][i] >= 9 && re[nb][i] <= 13))
		i++;
	while (re[nb][i])
	{
		write(1, &re[nb][i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	**re;
	int		i;
	long long int		nb;
	(void)argc;
	long long int		temp;

	temp = 0;
	nb = ft_atoi(argv[1]);
	i = 0;
	if (nb > 20)
	{
		temp = nb / 10;
		nb = nb % 10;
	}
	re = ft_split(ft_alloca());

	if (temp != 0)
	{
		ft_print(re, temp);
		write(1, " ", 1);
	}
	ft_print(re, nb);
	free (re);
	write(1, "\n", 1);
	return (0);
}
