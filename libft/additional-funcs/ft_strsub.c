/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:33:14 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:33:14 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	new_str = ft_strnew(len);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	return (new_str);
}

// int main() {
//     char *str = "Hello, world!";
//     char *sub;

//     sub = ft_strsub(str, 7, 5);
//     if (sub != NULL) 
// 	{
//         printf("Substring: %s\n", sub);
//         free(sub);
//     } 
// 	else
//         printf("Failed to extract substring.\n");

//     return 0;
// }