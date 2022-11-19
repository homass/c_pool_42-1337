/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:47:36 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/05 16:50:21 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
