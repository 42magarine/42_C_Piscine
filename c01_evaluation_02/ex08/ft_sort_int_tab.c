/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padam <padam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:35:05 by padam             #+#    #+#             */
/*   Updated: 2023/04/26 12:40:56 by padam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (i < size)
	{
		while (i2 < size -1)
		{
			if (*(tab + i2) > *(tab + i2 + 1))
			{
				temp = *(tab + i2);
				*(tab + i2) = *(tab + i2 + 1);
				*(tab + i2 + 1) = temp;
			}
			i2++;
		}
		i2 = 0;
		i++;
	}
}
