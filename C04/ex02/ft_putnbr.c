/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:31:06 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/03 15:36:04 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(int nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	int	numb;

	numb = nb;
	if (numb == -2147483648)
	{
		write_nbr('-');
		write_nbr(2 + '0');
		numb = 147483648;
	}
	if (numb < 0)
	{
		write_nbr('-');
		ft_putnbr(numb * -1);
	}
	if (numb >= 0 && numb <= 9)
		write_nbr(numb + '0');
	else if (numb > 9)
	{
		ft_putnbr(numb / 10);
		ft_putnbr(numb % 10);
	}
}
