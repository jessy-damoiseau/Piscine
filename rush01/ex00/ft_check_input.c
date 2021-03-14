/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpillia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:15:20 by adpillia          #+#    #+#             */
/*   Updated: 2020/07/12 15:37:06 by adpillia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_condition_col_top(int *ref);
int	ft_condition_col_bot(int *ref);
int	ft_condition_row_left(int *ref);
int	ft_condition_row_right(int *ref);

int	ft_check_input(int *ref)
{
	if (ft_condition_col_top(ref) == 1
			&& ft_condition_col_bot(ref) == 1
			&& ft_condition_row_left(ref) == 1
			&& ft_condition_row_right(ref) == 1)
		return (1);
	return (0);
}

int	ft_condition_col_top(int *ref)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (ref[i] == 1 && ref[i + 4] == 1)
			return (0);
		else if (ref[i] == 3 && ref[i + 4] == 3)
			return (0);
		else if (ref[i] == 2 && ref[i + 4] == 4)
			return (0);
		else if (ref[i] == 4 && ref[i + 4] != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_condition_col_bot(int *ref)
{
	int i;

	i = 4;
	while (i < 8)
	{
		if (ref[i] == 1 && ref[i - 4] == 1)
			return (0);
		else if (ref[i] == 3 && ref[i - 4] == 3)
			return (0);
		else if (ref[i] == 2 && ref[i - 4] == 4)
			return (0);
		else if (ref[i] == 4 && ref[i - 4] != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_condition_row_left(int *ref)
{
	int i;

	i = 8;
	while (i < 12)
	{
		if (ref[i] == 1 && ref[i + 4] == 1)
			return (0);
		else if (ref[i] == 3 && ref[i + 4] == 3)
			return (0);
		else if (ref[i] == 2 && ref[i + 4] == 4)
			return (0);
		else if (ref[i] == 4 && ref[i + 4] != 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_condition_row_right(int *ref)
{
	int i;

	i = 12;
	while (i < 16)
	{
		if (ref[i] == 1 && ref[i - 4] == 1)
			return (0);
		else if (ref[i] == 3 && ref[i - 4] == 3)
			return (0);
		else if (ref[i] == 2 && ref[i - 4] == 4)
			return (0);
		else if (ref[i] == 4 && ref[i - 4] != 1)
			return (0);
		i++;
	}
	return (1);
}
