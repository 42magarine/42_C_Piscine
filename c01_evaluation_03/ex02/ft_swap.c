/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeorgie <ggeorgie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:08:51 by ggeorgie          #+#    #+#             */
/*   Updated: 2023/04/27 12:54:48 by ggeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Swap the value of two integers whose addresses are entered as parameters. */

void	ft_swap(int *a, int *b)

{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
