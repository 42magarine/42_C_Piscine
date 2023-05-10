/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicatala <nicatala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:08:21 by nicatala          #+#    #+#             */
/*   Updated: 2023/05/02 10:38:34 by nicatala         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	n;

	a = 0;
	n = 1;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			if (n == 1)
					str[a] -= 32;
			n = 0;
		}
		else if (str[a] >= 48 && str[a] <= 57)
			n = 0;
		else
			n = 1;
		a++;
	}
	return (str);
}

//use the ft_strlowcase to change all string to lowercase
// #include<stdio.h>
// int	main(void)
// {
// 	char	ex09_01[62] = {"salut, comment tu vas ? 42mots quarante-deux;"};
// 	char	*pex09_01 = ex09_01;
// 	printf("%s\n", ft_strcapitalize(pex09_01));
// }