/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomilov <atomilov@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 22:07:36 by atomilov          #+#    #+#             */
/*   Updated: 2023/04/28 19:49:32 by atomilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)

{
	int	a;

	a = 0;
	if (str[a] == '\0')
		return (1);
	while (str[a] != '\0')
	{
		if
			((str[a] >= 'A' && str[a] <= 'Z')
			|| (str[a] >= 'a' && str[a] <= 'z'));
		else
			return (0);
			a++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	q[] = "bfbdfhsu!dnbg";
// 	printf("%d", ft_str_is_alpha(q));
// }
