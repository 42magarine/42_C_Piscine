/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweissha <aweissha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:28:50 by aweissha          #+#    #+#             */
/*   Updated: 2023/04/26 19:43:17 by aweissha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			&& (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			&& (!(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
					str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
