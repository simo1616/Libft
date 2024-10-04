/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:33:56 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:33:56 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char to_uppercase_at_even_indices(unsigned int index, char c) 
// {
//     if (index % 2 == 0 && c >= 'a' && c <= 'z') 
//         c = c - 32;  
// 	return (c);
// }

// int main()
// {
//     char str[] = "hello, simo!";
//     char *result = ft_strmapi(str, to_uppercase_at_even_indices);

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