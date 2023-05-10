/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporoshi <lporoshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:05:03 by lporoshi          #+#    #+#             */
/*   Updated: 2023/04/29 19:16:45 by lporoshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		nb *= base;
	return (nb);
}
