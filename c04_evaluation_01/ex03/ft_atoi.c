/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:30:49 by dscheffn          #+#    #+#             */
/*   Updated: 2023/05/03 11:07:07 by dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	storage;
	int	operator;

	storage = 0;
	operator = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			operator *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		storage *= 10;
		storage += *str - '0';
		str++;
	}
	return (storage * operator);
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char str1[50] = "-";
// 	char str2[50] = " 5bea";
// 	char str3[50] = " +--5bea";
// 	char str4[50] = "   -+-+-+-+5132";
// 	char str5[50] = "2147483649";
// 	printf("%i\n", ft_atoi(str1));
// 	printf("%i\n", ft_atoi(str2));
// 	printf("%i\n", ft_atoi(str3));
// 	printf("%i\n", ft_atoi(str4));
// 	printf("%i\n", ft_atoi(str5));
// 	printf("%i\n", atoi(str1));
// 	printf("%i\n", atoi(str2));
// 	printf("%i\n", atoi(str3));
// 	printf("%i\n", atoi(str4));
// 	printf("%i\n", atoi(str5));
// 	return (0);
// }
