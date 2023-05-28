/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 04:14:38 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/13 16:23:59 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
