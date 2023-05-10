/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isemin <isemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:44:22 by isemin            #+#    #+#             */
/*   Updated: 2023/04/29 22:08:34 by isemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	offset;

	offset = 0;
	while (str[offset] != '\0')
	{
		write(1, str + offset, 1);
		offset++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{	
	if (argc > 0)
		ft_putstr(argv[0]);
}
