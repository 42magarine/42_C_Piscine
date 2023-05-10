/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 17:44:30 by dscheffn          #+#    #+#             */
/*   Updated: 2023/05/03 15:08:03 by dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char str[] = "This is not a test!\n";	// 19
// 	char str1[] = "\n";					// 0
// 	char str2[] = "Have you ever heard about a man Kvothe, the bloodless?\n";
// 	ft_putstr(str);
// 	ft_putstr(str1);
// 	ft_putstr(str2);
// 	return (0);
// }

	// unsigned int		counter;
	// char				storage;

	// counter = 0;
	// while (str[counter] != '\0')
	// {
	// 	storage = str[counter];
	// 	write(1, &storage, 1);
	// 	counter++;
	// }
