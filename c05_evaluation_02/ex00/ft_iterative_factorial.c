/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:16:15 by rmarquar          #+#    #+#             */
/*   Updated: 2023/05/03 09:17:44 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)

{
	int	counter;
	int	result;

	counter = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (counter <= nb)
	{
		result = result * counter;
		counter++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	n;

// 	n = 5;

// 	printf("Result is %d\n", ft_iterative_factorial(n));
// }
