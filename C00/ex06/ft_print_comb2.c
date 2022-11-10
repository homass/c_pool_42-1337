/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:49:08 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/03/24 19:56:42 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnumb(char a)
{
	write (1, &a, 1);
}

void	ft_putnumb(int a, int b)
{
	ft_printnumb((a / 10) + '0');
	ft_printnumb((a % 10) + '0');
	ft_printnumb(' ');
	ft_printnumb((b / 10) + '0');
	ft_printnumb((b % 10) + '0');
	if (a < 98)
	{
		ft_printnumb(',');
		ft_printnumb(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0 ;
	while (a <= 98)
	{
		b = a + 1 ;
		while (b <= 99)
		{
			ft_putnumb(a, b);
			b ++;
		}
		a ++;
	}
}
