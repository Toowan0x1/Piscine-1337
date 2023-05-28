/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:00:27 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/19 18:08:05 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	compute_total_len(int size, char **strs, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_size;
	int		i;
	char	*bff;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_size = compute_total_len(size, strs, ft_strlen(sep));
	string = (char *)malloc((full_size + 1) * sizeof(char));
	if (string == NULL)
		return (0);
	bff = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(bff, strs[i]);
		bff += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(bff, sep);
			bff += ft_strlen(sep);
		}
	}
	*bff = '\0';
	return (string);
}
