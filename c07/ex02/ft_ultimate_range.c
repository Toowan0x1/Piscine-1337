/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:15:25 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/18 10:47:27 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	r;
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = max - min;
	buffer = (int *)malloc(r * sizeof(int));
	if (buffer == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < r)
	{
		buffer[i] = min + i;
		i++;
	}
	return (r);
}
