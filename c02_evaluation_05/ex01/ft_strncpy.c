/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicatala <nicatala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 01:33:46 by nicatala          #+#    #+#             */
/*   Updated: 2023/05/03 12:00:07 by nicatala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

// #include<string.h>
// #include<stdio.h>
//  int	main(void)
// {
// 	char src[] = "hello";
// 	char	dest[] = "World";
// 	printf("%s", ft_strncpy(dest, src, 6));
// 	printf("\n%s", strncpy(dest, src, 6));
// }