/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 00:14:04 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/11 20:07:47 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_lower_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_cap;

	i = 0;
	is_cap = 1;
	to_lower_case(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_cap == 1)
				str[i] -= 32;
			is_cap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_cap = 0;
		else
			is_cap = 1;
		i++;
	}
	return (str);
}
