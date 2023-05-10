/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isemin <isemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 22:09:33 by isemin            #+#    #+#             */
/*   Updated: 2023/04/29 22:20:53 by isemin           ###   ########.fr       */
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

void	ft_print_params(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		count++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argc, argv);
}
