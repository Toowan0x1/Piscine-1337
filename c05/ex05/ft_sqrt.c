/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:06:36 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/21 22:40:00 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int				res;
	long long int	upper;
	long long int	lower;
	long long int	mid;

	if (nb <= 0)
		return (0);
	upper = nb;
	lower = 1;
	mid = (upper + lower) / 2;
	while (lower <= upper)
	{
		if (mid * mid == nb)
		{
			res = mid;
			return (res);
		}
		else if (mid * mid < nb)
			lower = mid + 1;
		else
			upper = mid - 1;
		mid = (lower + upper) / 2;
	}
	return (0);
}
