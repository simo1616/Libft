/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:32:58 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:32:58 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, &s1[start], end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}

// int main() {
//     char *s = " \t\n Hello, world! \n\t ";
//     char *trimmed = ft_strtrim(s);

//     if (trimmed != NULL) 
// 	{
//         printf("Original: '%s'\n", s);
//         printf("Trimmed: '%s'\n", trimmed);
//         free(trimmed);
//     } 
// 	else
//         printf("Memory allocation failed.\n");

//     return 0;
// }