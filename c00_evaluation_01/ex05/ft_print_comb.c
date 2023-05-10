/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschuber <tschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:15:54 by tschuber          #+#    #+#             */
/*   Updated: 2023/04/25 13:01:18 by tschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	put_three_char(char c1, char c2, char c3)
{
	ft_putchar(c1 + 48);
	ft_putchar(c2 + 48);
	ft_putchar(c3 + 48);
	if (c1 != 7 || c2 != 8 || c3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = 0;
	while (i1 <= 7)
	{
		i2 = i1 + 1;
		while (i2 <= 8)
		{
			i3 = i2 + 1;
			while (i3 <= 9)
			{
				put_three_char(i1, i2, i3);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}
