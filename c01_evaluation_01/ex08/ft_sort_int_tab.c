/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmidt <jschmidt@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:25:08 by jschmidt          #+#    #+#             */
/*   Updated: 2023/04/25 10:17:32 by jschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_size;
	int	current_slot;
	int	storage;

	count_size = 0;
	while (count_size < size)
	{
		current_slot = 0;
		while (current_slot < (size - 1 - count_size))
		{
			if (tab[current_slot] > tab[current_slot + 1])
			{
				storage = tab[current_slot];
				tab[current_slot] = tab[current_slot + 1];
				tab[current_slot + 1] = storage;
			}
			current_slot++;
		}
		count_size++;
	}
}
