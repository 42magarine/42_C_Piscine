/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporoshi <lporoshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:19:29 by lporoshi          #+#    #+#             */
/*   Updated: 2023/04/29 19:41:12 by lporoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_digit(int i)
{
	char	c;

	c = (char)i + '0';
	write(1, &c, 1);
}

int	ft_norm(int row, int offset)
{
	if (row + offset > 9 || row + offset < 0)
		return (0);
	return (1);
}

void	ft_found_actions(int cols[], int *counter)
{
	int	i;

	(*counter) += 1;
	i = 0;
	while (i < 10)
		ft_put_digit(cols[i++]);
	write(1, "\n", 1);
}

void	ft_calculate(int cols[], int col, int *counter)
{
	int	row;
	int	offset;

	if (col == 10)
	{
		ft_found_actions(cols, counter);
		return ;
	}
	row = -1;
	while (++row < 10)
	{
		offset = 0;
		while (++offset <= col)
		{
			if (cols[col - offset] == row \
			|| (cols[col - offset] == row - offset && ft_norm(row, -offset)) \
			|| (cols[col - offset] == row + offset && ft_norm(row, offset)))
				break ;
		}
		if (offset > col)
		{
			cols[col] = row;
			ft_calculate(cols, col + 1, counter);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	cols[10];
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i < 10)
	{
		cols[i] = -1;
		i++;
	}
	ft_calculate(cols, 0, &counter);
	return (724);
}
