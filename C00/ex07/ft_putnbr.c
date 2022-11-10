/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:20:08 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/03/24 21:36:20 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(char num)
{
	write (1, &num, 1);
}

void	ft_putnbr(int number)
{
	int	num;

	num = number;
	if (num >= 0 && num <= 9)
		ft_printnbr((num) + '0');
	if (num == -2147483648)
	{
		ft_printnbr('-');
		ft_printnbr((2) + '0');
		num = 147483648;
	}
	if (num < 0)
	{
		ft_printnbr('-');
		ft_putnbr(num * -1);
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
