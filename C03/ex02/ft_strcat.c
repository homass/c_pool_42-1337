/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:16:32 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/02 12:04:37 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[nb])
	{
		dest[i] = src[nb];
		i++;
		nb++;
	}
	dest[i] = '\0';
	return (dest);
}
