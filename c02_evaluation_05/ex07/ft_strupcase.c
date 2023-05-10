/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicatala <nicatala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:25:09 by nicatala          #+#    #+#             */
/*   Updated: 2023/05/01 18:57:29 by nicatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// #include<stdio.h>
// int	main(void)
// {
	// char	ex07[5] = {"asdf"};
	// char	*ex7 = ex07;
	// printf("%s", ft_strupcase(ex7));
// }
// 