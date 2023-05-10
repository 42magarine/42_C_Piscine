/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakukin <mmakukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:38:59 by mmakukin          #+#    #+#             */
/*   Updated: 2023/05/04 16:02:31 by mmakukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sign;

	sign = 1;
	i = 1;
	if (nb < 0)
	{
		sign = -sign;
		nb = -nb;
	}
	if (nb == 1)
	{
		return (sign * nb);
	}
	while (i++ <= nb / 2 && i <= 46340)
	{
		if (i * i == nb)
		{
			return (sign * i);
		}
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%i\n", ft_sqrt(0));
// 	printf("%i\n", ft_sqrt(1));
// 	printf("%i\n", ft_sqrt(4));
// 	printf("%i\n", ft_sqrt(16));
// 	printf("%i\n", ft_sqrt(-1));
// 	printf("%i\n", ft_sqrt(-4));
// 	printf("%i\n", ft_sqrt(-16));
// 	printf("%i\n", ft_sqrt(2147395600));
// }