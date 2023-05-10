/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:26:25 by marschul          #+#    #+#             */
/*   Updated: 2023/04/24 14:26:27 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*current;

	current = dest;
	while (*src != '\0' && n > 0)
	{
		*current = *src;
		src++;
		current++;
		n--;
	}
	while (n > 0)
	{
		*current = '\0';
		current++;
		n--;
	}
	return (dest);
}
