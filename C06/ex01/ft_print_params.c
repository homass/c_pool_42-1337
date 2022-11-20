/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:39:55 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/03 21:46:20 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char str)
{
	write(1, &str, 1);
}

void	ft_print_params(char *str)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (str[x])
	{
		x++;
	}
	while (str[i])
	{
		write_char(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_print_params(av[i]);
		i++;
	}
}
