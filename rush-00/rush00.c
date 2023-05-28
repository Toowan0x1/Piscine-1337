/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:57:23 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/13 15:57:34 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_x(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	rush_y(int x, int y)
{
	int	i;

	while (y > 0)
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 || i == x)
			{
				ft_putchar('|');
				if (i == x)
					ft_putchar('\n');
			}
			else
				ft_putchar(' ');
			i++;
		}
		y--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		rush_x(x);
		rush_y(x, (y - 2));
		if (y != 1)
			rush_x(x);
	}
}
