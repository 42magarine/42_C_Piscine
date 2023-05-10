/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomilov <atomilov@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:01:56 by atomilov          #+#    #+#             */
/*   Updated: 2023/04/30 16:26:01 by atomilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
		}
		a++;
	}
	return (str);
}

// #include <stdio.h>
// char	main()
// {
// 	char	q[] = "bfb dGD FHFKWbg";
// 	printf("%s", ft_strlowcase(q));
// }
