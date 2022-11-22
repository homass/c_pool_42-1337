/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:59:01 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/10 15:22:28 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	cr;
	int	tmp;
	int	*index;
	int	*d;

	if (min >= max)
		return (0);
	tmp = max - min;
	index = (int *) malloc (sizeof(int) * tmp);
	d = index;
	if (!d)
		return (0);
	cr = 0;
	while (cr < tmp)
	{
		index[cr] = min + cr;
		cr++;
	}
	return (index);
}
