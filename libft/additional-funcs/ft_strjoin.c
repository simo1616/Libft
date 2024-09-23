/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:34:16 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:34:16 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	return (result);
}

// int main() {
//     char *s1 = "Hello, ";
//     char *s2 = "world!";
//     char *joined;

//     joined = ft_strjoin(s1, s2);
//     if (joined != NULL) {
//         printf("Joined string: %s\n", joined);
//         free(joined);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }