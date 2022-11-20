/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:40:33 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/14 21:42:54 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *src1, char *src2)
{
	int	i;

	i = 0;
	while (src1[i] && src2[i] && src1[i] == src2[i])
		i++;
	return (src1[i] - src2[i]);
}

void	ft_swap(char **c, char **j)
{
	char	*tmp;

	tmp = *c;
	*c = *j;
	*j = tmp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (ac > 1)
	{
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				ft_swap(&av[j], &av[j + 1]);
				j = 0;
			}
			j++;
		}
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		write(1, "\n", 1);
		j++;
	}
}
