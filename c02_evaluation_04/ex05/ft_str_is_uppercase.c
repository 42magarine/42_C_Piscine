/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomilov <atomilov@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:34:58 by atomilov          #+#    #+#             */
/*   Updated: 2023/04/29 18:21:52 by atomilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if
			(str[a] >= 'A' && str[a] <= 'Z');
		else
			return (0);
			a++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	q[] = "DFNJNDKNB";
// 	printf("%d", ft_str_is_uppercase(q));
// }
