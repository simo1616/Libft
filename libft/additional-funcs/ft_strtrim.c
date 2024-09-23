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

#include <libft.h>

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	char	*trimmed;
	int		start;
	int		end;
	int		len;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_isspace(s[start]))
		start++;
	while (end >= start && ft_isspace(s[end]))
		end--;
	len = end - start + 1;
	trimmed = ft_strnew(len);
	if (!trimmed)
		return (NULL);
	ft_strncpy(trimmed, &s[start], len);
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