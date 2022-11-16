/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:03:03 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/03/29 20:55:53 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	ft_lower (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (c == 1)
				str[i] = str[i] - 32;
			c = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			c = 0;
		else
			c = 1;
		i ++;
	}
	return (str);
}
