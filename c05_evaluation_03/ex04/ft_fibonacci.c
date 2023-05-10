/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakukin <mmakukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:25:25 by mmakukin          #+#    #+#             */
/*   Updated: 2023/05/04 16:03:04 by mmakukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	result = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result += ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%i", ft_fibonacci(6));
// }