/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomilov <atomilov@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:29:27 by atomilov          #+#    #+#             */
/*   Updated: 2023/04/29 18:21:42 by atomilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if
			(str[a] >= 'a' && str[a] <= 'z');
		else
			return (0);
			a++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	q[] = "bfbdfhsudnbg";
// 	printf("%d", ft_str_is_lowercase(q));
// }
