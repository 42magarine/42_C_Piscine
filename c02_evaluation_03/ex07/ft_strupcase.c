/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:05:56 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/30 15:48:23 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			str[i] += 0;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char arr[] = "ddvdF";
// 	char *str = arr;
// 	ft_strupcase(str);
// 	printf("%s", str);
// }
