/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:42:27 by rmarquar          #+#    #+#             */
/*   Updated: 2023/05/03 11:47:14 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	result;

	counter = 1;
	result = 1;
	if (power < 0)
		return (0);
	while (counter <= power)
	{
	result = result * nb;
	counter++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 2;
// 	power = 5;
// 	printf("The result is %d\n", ft_iterative_power(nb, power));
// 	return (0);
// }
