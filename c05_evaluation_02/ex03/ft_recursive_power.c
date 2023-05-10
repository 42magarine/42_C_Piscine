/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:50:27 by rmarquar          #+#    #+#             */
/*   Updated: 2023/05/03 12:58:18 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recur(int nb, int power, int n)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power >= 1)
		return (ft_recursive_power_recur(nb, power - 1, n * nb));
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recursive_power_recur(nb, power, nb));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	power;

// 	nb = 3;
// 	power = 3;

// 	printf("The result is %d\n", ft_recursive_power(nb, power));
// 	return (0);
// }
