/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 09:28:05 by dscheffn          #+#    #+#             */
/*   Updated: 2023/05/03 14:42:15 by dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	negative(int *nb)
{
	ft_putchar('-');
	*nb *= -1;
}

void	ft_putnbr(int nb)
{
	int		arr[20];
	int		counter;

	counter = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
		negative(&nb);
	else if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		arr[counter] = (nb % 10) + '0';
		nb /= 10;
		counter++;
	}
	while (counter--)
		ft_putchar(arr[counter]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb0 = 2147483647;
// 	int	nb1 = 1234567891;
// 	int	nb2 = 684651;
// 	int	nb3 = 50005;
// 	int	nb4 = 1;
// 	int	nb5 = 0;
// 	int	nb6 = -5;
// 	int	nb7 = -3000;
// 	int	nb8 = -1155565156;
// 	int	nb9 = -2147483648;
// 	ft_putnbr(nb0);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb1);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb2);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb3);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb4);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb5);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb6);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb7);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb8);
// 	write(1, "\n", 1);
// 	ft_putnbr(nb9);
// 	return (0);
// }
