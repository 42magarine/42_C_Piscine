/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:05:10 by rmarquar          #+#    #+#             */
/*   Updated: 2023/05/03 15:41:08 by rmarquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci2(int fib_0, int fib_1, int index)
{
	int	i;
	int	fib_n;

	i = 2;
	while (i <= index)
	{
		fib_n = fib_0 + fib_1;
		fib_0 = fib_1;
		fib_1 = fib_n;
		i++;
	}
	return (fib_n);
}

int	ft_fibonacci(int index)
{
	int	fib_0;
	int	fib_1;

	fib_0 = 0;
	fib_1 = 1;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (fib_0);
	}
	else if (index == 1)
	{
		return (fib_1);
	}
	else
	{
		return (ft_fibonacci2(fib_0, fib_1, index));
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("The result is %d", ft_fibonacci(11));
// 	return (0);
// }
