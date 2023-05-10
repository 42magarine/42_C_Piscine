/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeorgie <ggeorgie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:08:51 by ggeorgie          #+#    #+#             */
/*   Updated: 2023/04/27 12:56:11 by ggeorgie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Divide parameters a by b and store the result in the int pointed by div.
 * Store the remainder of the division of a by b in the int pointed by mod. */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
