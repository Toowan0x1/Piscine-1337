/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:35:24 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/14 23:01:18 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	is_prime;
	int	i;

	if ((nb <= 0) || (nb == 1))
		return (0);
	i = 2;
	is_prime = 1;
	while (i < nb)
	{
		if ((nb % i) == 0)
			is_prime = 0;
		i++;
	}
	if (is_prime)
		return (1);
	else
		return (0);
}
