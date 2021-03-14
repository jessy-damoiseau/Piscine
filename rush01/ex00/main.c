/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:32:55 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/12 15:40:33 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_atoi(char *str);
void	ft_print(int *map);
int		*ft_recup_view(int *map, int pv, int i);
int		*ft_number_view(int *map);
int		ft_tabcmp(int *s1, int *s2);
int		*ft_increment(int *nb);
int		*ft_max(void);
int		*ft_min(void);
int		*ft_placement(int *map, int *ref);
int		ft_check_input(int *ref);

int		main(int argc, char **argv)
{
	int		*map;
	int		*ref;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	map = ft_min();
	ref = malloc(sizeof(int) * 16);
	ref = ft_atoi(argv[1]);
	if (ref[0] == 0 || ft_check_input(ref) == 0)
		write(1, "Error\n", 6);
	else
	{
		map = ft_placement(map, ref);
		if (ft_tabcmp(ft_number_view(map), ref) == 0)
			ft_print(map);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
