/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomilov <atomilov@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:51:03 by atomilov          #+#    #+#             */
/*   Updated: 2023/04/29 18:21:23 by atomilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	int	a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if
			(str[a] >= '0' && str[a] <= '9');
		else
			return (0);
			a++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	q[] = "8458684568";
// 	printf("%d", ft_str_is_numeric(q));
// }
