/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:03:04 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/10 15:02:42 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		f;
	int		m;
	char	*des;

	des = malloc (sizeof(strs));
	i = 0;
	f = 0;
	m = 0;
	while (i < size)
	{
		f = 0;
		while (strs[i][f])
		{
			des[m++] = strs[i][f++];
		}
		f = 0;
		while (sep[f] && i != size - 1)
		{
			des[m++] = sep[f++];
		}
		i++;
	}
	des[m] = '\0';
	return (des);
}
