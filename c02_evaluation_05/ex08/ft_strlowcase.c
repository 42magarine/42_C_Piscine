/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicatala <nicatala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:58:01 by nicatala          #+#    #+#             */
/*   Updated: 2023/05/01 19:01:23 by nicatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		i++;
	}
	return (str);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char	ex07[5] = {"AAAd"};
// 	char	*ex7 = ex07;
// 	printf("%s", ft_strlowcase(ex7));
// }
