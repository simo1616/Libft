/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:28:43 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:28:43 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// int main ()
// {
//     char str[20] = "Hello, Simo!";
//     char *result;

//     result = ft_memchr(str, 'S', 20);

//     if (result != NULL) {
//         write(1, result, 20 - (result - str));
//     } else {
//         write(1, "Character not found\n", 20);
//     }
//     write(1, "\n", 1);

//     return 0;
// }