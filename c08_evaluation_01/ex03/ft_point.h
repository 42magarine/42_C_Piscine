/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slippert <slippert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:17:42 by slippert          #+#    #+#             */
/*   Updated: 2023/05/10 11:19:17 by slippert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}				t_point;
#endif
// #include "ft_point.h"
// #include <stdio.h>
// void set_point(t_point *point)
// {
// 	point->x = 42;
// 	point->y = 21;
// }
// int main(void)
// {
// 	t_point point;
// 	set_point(&point);
// 	printf("x: %d y: %d ", point.x, point.y);
// 	return (0);
// }