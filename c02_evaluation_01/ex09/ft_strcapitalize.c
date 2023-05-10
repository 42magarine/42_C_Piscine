/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marschul <marschul@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:14:53 by marschul          #+#    #+#             */
/*   Updated: 2023/04/25 11:30:09 by marschul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_beginning_of_word(char *str, int i)
{
	if (i == 0)
		return (1);
	if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			{
				return (1);
			}
		}
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*start;

	start = str;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && is_beginning_of_word(str, i))
			str[i] -= 32;
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z' && !is_beginning_of_word(str, i))
				str[i] += 32;
		}
		i ++;
	}
	return (start);
}
