/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomilov <atomilov@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:40:40 by atomilov          #+#    #+#             */
/*   Updated: 2023/04/29 18:22:03 by atomilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if
			(str[a] >= 32 && str[a] <= 126);
		else
			return (0);
			a++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	q[] = "bfbdfhs!dnbg";
// 	printf("%d", ft_str_is_printable(q));
// }
