/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:22:24 by dscheffn          #+#    #+#             */
/*   Updated: 2023/05/03 11:03:05 by dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str[] = "This is not a test!";	// 19
// 	char str1[] = "";					// 0
// 	char str2[] = "Hello World, stay awhile and listen."; // 36
// 	printf("%d\n", ft_strlen(str));
// 	printf("%lu\n", strlen(str));
// 	printf("%d\n", ft_strlen(str1));
// 	printf("%lu\n", strlen(str1));
// 	printf("%d\n", ft_strlen(str2));
// 	printf("%lu", strlen(str2));
// 	return (0);
// }
