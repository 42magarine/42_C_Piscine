/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakukin <mmakukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:36:18 by mmakukin          #+#    #+#             */
/*   Updated: 2023/05/04 16:04:03 by mmakukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		i = nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%i", ft_recursive_factorial(6));
// }