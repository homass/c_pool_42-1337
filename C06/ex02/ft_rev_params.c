/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:46:56 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/03 21:49:56 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char str)
{
	write(1, &str, 1);
}

void	ft_rev_params(char *str)
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
	while (ac > 1)
	{
		ft_rev_params(av[ac - 1]);
		ac --;
	}
}
