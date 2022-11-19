/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:36:00 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/05 16:37:01 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	rev;

	rev = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	rev = (nb * ft_recursive_factorial(nb - 1));
	return (rev);
}
