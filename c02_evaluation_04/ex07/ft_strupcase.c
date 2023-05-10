/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomilov <atomilov@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:54:28 by atomilov          #+#    #+#             */
/*   Updated: 2023/04/29 18:22:41 by atomilov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}

// #include <stdio.h>
// char	main()
// {
// 	char	q[] = "bfbdfhs!dnbg";
// 	printf("%s", ft_strupcase(q));
// }
