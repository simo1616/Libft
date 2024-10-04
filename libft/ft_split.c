/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:33:26 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:33:26 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*alloc_word(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, i + 1);
	return (word);
}

static void	free_words(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static int	fill_result(char **result, char const *s, char c, int word_count)
{
	int		i;
	int		j;
	char	*temp_word;

	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (s[j] == c)
			j++;
		temp_word = alloc_word(&s[j], c);
		if (!temp_word)
		{
			free_words(result, i);
			return (0);
		}
		result[i] = temp_word;
		i++;
		while (s[j] && s[j] != c)
			j++;
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_countwords(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (!fill_result(result, s, c, word_count))
		return (NULL);
	return (result);
}

// int main() 
// {
//     char *s = "*salut*les***etudiants*";
//     char **result = ft_split(s, '*');
//     int i;

// 	i = 0;
//     while (result[i] != NULL) 
// 	{
//         printf("Segment %d: '%s'\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);
//     return 0;
// }