/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:04:40 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/29 14:18:04 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	i;

	array = (int *)malloc(sizeof(int) * length);
	if (array == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = (f)(tab[i]);
		i++;
	}
	return (array);
}
