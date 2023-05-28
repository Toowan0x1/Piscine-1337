/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:41:45 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/18 11:40:14 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstsize;
	unsigned int	srcsize;

	dstsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	i = 0;
	j = dstsize;
	if (size == 0 || size <= dstsize)
		return (srcsize + size);
	while (src[i] && i < size - dstsize - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dstsize + srcsize);
}
