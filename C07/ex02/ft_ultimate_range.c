/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:04:23 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/10 13:58:17 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tmp = malloc (sizeof(int) * size);
	if (!tmp)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (size);
}
