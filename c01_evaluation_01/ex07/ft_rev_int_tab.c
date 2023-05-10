/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmidt <jschmidt@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:25:53 by jschmidt          #+#    #+#             */
/*   Updated: 2023/04/25 11:12:39 by jschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	storage;

	i = 0;
	while (i < size / 2)
	{
		storage = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = storage;
		i++;
	}
}
