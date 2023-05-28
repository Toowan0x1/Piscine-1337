/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:17:46 by oel-houm          #+#    #+#             */
/*   Updated: 2022/06/28 00:14:27 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	char_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (char_is_sep(str[i + 1], charset) == 1
			&& char_is_sep(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	fill_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (char_is_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	fill_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (char_is_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_sep(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			fill_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		total_words;

	total_words = count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (total_words + 1));
	tab[total_words] = 0;
	fill_split(tab, str, charset);
	return (tab);
}
