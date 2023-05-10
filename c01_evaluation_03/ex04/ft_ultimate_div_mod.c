/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeorgie <ggeorgie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:08:51 by ggeorgie          #+#    #+#             */
/*   Updated: 2023/04/27 12:58:49 by ggeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Divide parameters a by b. 
 * The result of this division is stored in the int pointed by a. 
 * The remainder of the division is stored in the int pointed by b */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	temp_a;
	int	temp_b;

	temp_a = *a / *b;
	temp_b = *a % *b;
	*a = temp_a;
	*b = temp_b;
}	
