/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:34:22 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:34:22 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int main() 
// {
//     const char *str = "Hello, Simo!";
//     char ch = 'S';
//     char *result;

//     result = ft_strchr(str, ch);
//     if (result) {
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//         write(1, result, 20 - (result - str));
//     } else {
//         printf("Character '%c' not found\n", ch);
//     }

//     return 0;
// }