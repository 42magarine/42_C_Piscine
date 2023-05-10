/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakukin <mmakukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 02:47:56 by mmakukin          #+#    #+#             */
/*   Updated: 2023/05/03 10:24:46 by mmakukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	temp;

	temp = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power > 0)
	{
		temp = nb * ft_recursive_power(nb, power - 1);
	}
	return (temp);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%i", ft_recursive_power(2, 10));
// }