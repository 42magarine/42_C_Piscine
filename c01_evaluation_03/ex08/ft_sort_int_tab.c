/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeorgie <ggeorgie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:09:19 by ggeorgie          #+#    #+#             */
/*   Updated: 2023/04/30 18:08:11 by ggeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Sort an array of integers in ascending order.
 * https://youtu.be/xli_FI7CuzA */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < size)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
