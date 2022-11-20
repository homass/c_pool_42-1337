/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:31:42 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/04 11:49:10 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char str)
{
	write(1, &str, 1);
}

void	ft_print_program_name(char *str)
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
	if (ac == 1)
		ft_print_program_name(av[0]);
}
