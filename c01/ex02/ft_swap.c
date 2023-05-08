/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mott <mott@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:47:08 by mott              #+#    #+#             */
/*   Updated: 2023/04/25 20:47:41 by mott             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b);

void	ft_swap(int *a, int*b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
