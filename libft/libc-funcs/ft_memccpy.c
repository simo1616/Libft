/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:04:18 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 12:04:18 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*ptr_dst;
	const unsigned char	*ptr_src;
	size_t				i;

	i = 0;
	ptr_dst = (char *)dst;
	ptr_src = (const unsigned char *)src;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_src[i] == (unsigned char)c)
			return (&ptr_dst[i + 1]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char src[] = "Hello, 42 students!";
//     char dst[20];
//     char *result;
//     result = ft_memccpy(dst, src, '4', 20);
//     if (result != NULL)
//     {
//         printf("La chaîne jusqu'à '4' a été copiée : %s\n", dst);
//         printf("Le retour de ft_memccpy pointe ici : %s\n", result);
//     }
//     else
//     {
//         printf("Caractère non trouvé. Chaîne copiée : %s\n", dst);
//     }

//     return 0;
// }