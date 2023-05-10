/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeorgie <ggeorgie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:08:51 by ggeorgie          #+#    #+#             */
/*   Updated: 2023/04/27 20:48:20 by ggeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Count and return the number of characters in a string. */

int	ft_strlen(char *str)
{
	char	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		counter++;
	}
	str = &counter;
	return (*str);
}
