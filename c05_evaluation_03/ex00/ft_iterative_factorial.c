/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakukin <mmakukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:12:14 by mmakukin          #+#    #+#             */
/*   Updated: 2023/05/03 02:33:58 by mmakukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%i", ft_iterative_factorial(5));
// }