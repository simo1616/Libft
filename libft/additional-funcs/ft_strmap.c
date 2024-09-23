/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:34:08 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:34:08 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = ft_strnew(ft_strlen(s));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(s[i]);
		i++;
	}
	return (result);
}

// char toto_uppercase(char c) 
// {
//     if (c >= 'a' && c <= 'z') {
//         return c - 32;
//     }
//     return c;
// }

// int main() 
// {
//     char str[] = "hello, simo!";
//     char *result = ft_strmap(str, toto_uppercase);

//     if (result != NULL) 
// 	{
//         printf("Original string: %s\n", str);
//         printf("Mapped string: %s\n", result);
//         free(result);
//     } 
// 	else
//         printf("Memory allocation failed.\n");
//     return 0;
// }