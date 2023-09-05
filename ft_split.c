/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:49:06 by conde-an          #+#    #+#             */
/*   Updated: 2023/09/05 17:49:16 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i])
				i++;
		}
		else 
			i++;
	}
	return (word_count);
}

static void	freetata(char **result)
{
	while (*result)
		free(*result++);
	free(result);
}

static char	*set_word(char const *s, char c, char **result)
{
	int		i;
	char	*a;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (!a)
	{
		freetata(result);
		return (NULL);
	}
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_size;
	int		j;

	if (!s && !c)
		return (NULL);
	word_size = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (word_size + 1));
	if (!result)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (j < word_size && *s != c)
		{
			result[j] = set_word(s, c, result);
			j++;
		}
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	result[j] = NULL;
	return (result);
}
