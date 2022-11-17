/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-hsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:15:14 by hait-hsa          #+#    #+#             */
/*   Updated: 2022/04/11 14:25:20 by hait-hsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *tmp)
{
	unsigned int	b;

	b = 0;
	while (tmp[b])
		b++;
	return (b);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d;
	unsigned int	s;

	i = ft_strlen(dest);
	j = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size <= 0)
		return (s + size);
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (size < d)
		return (s + size);
	else
		return (d + s);
}
