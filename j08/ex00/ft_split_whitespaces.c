/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 19:07:43 by dshults           #+#    #+#             */
/*   Updated: 2017/07/17 19:07:45 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_char_is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (0);
	return (1);
}

int					ft_words_count(char *str)
{
	int		char_to_check;
	int		yes;
	int		words_count;

	char_to_check = 0;
	yes = 0;
	words_count = 0;
	while (str[char_to_check])
	{
		if (ft_char_is_separator(str[char_to_check]))
		{
			yes++;
			if (yes == 1)
				words_count++;
		}
		else
			yes = 0;
		char_to_check++;
	}
	return (words_count);
}

int					ft_char_count(char *str, int word_to_check, int *word_start)
{
	int		char_to_check;
	int		yes;
	int		found;
	int		length;

	char_to_check = 0;
	yes = 0;
	found = -1;
	length = 0;
	while (str[char_to_check])
	{
		if (ft_char_is_separator(str[char_to_check]))
		{
			yes++;
			if (yes == 1)
				if (++found == word_to_check)
					*word_start = char_to_check;
			if (found == word_to_check)
				length++;
		}
		else
			yes = 0;
		char_to_check++;
	}
	return (length);
}

char				*ft_strncpy(char *copy, char *word, unsigned int char_count)
{
	unsigned int	i;

	i = 0;
	while (i < char_count)
	{
		copy[i] = word[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char				**ft_split_whitespaces(char *str)
{
	int		word_start;
	int		word_to_check;
	int		words_count;
	char	**copy;
	int		char_count;

	word_start = 0;
	word_to_check = 0;
	words_count = ft_words_count(str);
	if (!(copy = malloc(sizeof(char *) * words_count + 1)))
		return (0);
	while (word_to_check < words_count)
	{
		char_count = ft_char_count(str, word_to_check, &word_start);
		if (!(copy[word_to_check] = malloc(sizeof(char) * char_count + 1)))
			return (0);
		ft_strncpy(copy[word_to_check], &str[word_start], char_count);
		word_to_check++;
	}
	if (!(copy[word_to_check] = malloc(sizeof(char) * 1)))
		return (0);
	copy[word_to_check] = 0;
	return (copy);
}
