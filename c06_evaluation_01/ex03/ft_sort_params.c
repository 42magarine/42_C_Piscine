/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isemin <isemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:19:59 by isemin            #+#    #+#             */
/*   Updated: 2023/04/30 15:20:01 by isemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	convert_ascii(int code)
{
	if (code < 0)
		return (256 + code);
	else
		return (code);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	offset;
	int	res;

	offset = 0;
	while (s1[offset] != '\0' && s2[offset] != '\0')
	{
		if (s1[offset] != s2[offset])
		{
			res = convert_ascii(s1[offset]) - convert_ascii(s2[offset]);
			return (res);
		}
		offset++;
	}
	res = convert_ascii(s1[offset]) - convert_ascii(s2[offset]);
	return (res);
}

void	ft_sort_argv(char **argv, int argc)
{
	int		i;
	int		count;
	char	*tmp_val;

	count = 1;
	while (count < argc - 1)
	{
		i = 1;
		while (i < argc - count)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp_val = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp_val;
			}
			i++;
		}
	count++;
	}
}

void	ft_print_params(int argc, char **argv)
{
	int	count;
	int	offset;

	count = 1;
	while (count < argc)
	{
		offset = 0;
		while (argv[count][offset] != '\0')
		{
			write(1, argv[count] + offset, 1);
			offset++;
		}
		write(1, "\n", 1);
		count++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_argv(argv, argc);
		ft_print_params(argc, argv);
	}
}
