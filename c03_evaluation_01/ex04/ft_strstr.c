/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:15:10 by fbock             #+#    #+#             */
/*   Updated: 2023/04/26 19:34:45 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*to_find_start;
	char	*src_current_letter;

	to_find_start = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		src_current_letter = str;
		while (*str == *to_find && *str && *to_find)
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
			return (src_current_letter);
		else
		{
			str = src_current_letter + 1;
			to_find = to_find_start;
		}
	}
	return (0);
}
