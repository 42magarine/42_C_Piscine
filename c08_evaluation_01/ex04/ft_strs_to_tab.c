/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slippert <slippert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:23:20 by slippert          #+#    #+#             */
/*   Updated: 2023/05/10 14:22:14 by slippert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
		{
			while (i >= 0)
				free(tab[i--].copy);
			free(tab);
			return (NULL);
		}
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	struct s_stock_str	*stock;
// 	int i = 0;
// 	stock = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (stock == NULL)
// 	{
// 		printf("Error: Memory allocation failed\n");
// 		return 1;
// 	}
// 	printf("Input:\n");
// 	i = 0;
// 	while (i < argc - 1)
// 	{
// 		printf("%s\n", argv[i + 1]);
// 		i++;
// 	}
// 	printf("\nResult:\n");
// 	i = 0;
// 	while (stock[i].str != 0)
// 	{
// 		printf("String: %s\n", stock[i].str);
// 		printf("Length: %d\n", stock[i].size);
// 		printf("Copy: %s\n", stock[i].copy);
// 		printf("\n");
// 		i++;
// 	}
// 	i = 0;
// 	while (stock[i].str != 0)
// 	{
// 		free(stock[i].copy);
// 		i++;
// 	}
// 	free(stock);
// 	return 0;
// }
// FOR EX-05
// int	main(int argc, char **argv)
// {
// 	struct s_stock_str	*stock;
// 	stock = ft_strs_to_tab(argc - 1, argv + 1);
// 	ft_show_tab(stock);
// 	return (0);
// }
// #ifndef FT_STOCK_STR_H
// # define FT_STOCK_STR_H
// typedef struct s_stock_str
// {
// int size;
// char *str;
// char *copy;
// } t_stock_str;
// void	ft_show_tab(struct s_stock_str *par);
// #endif