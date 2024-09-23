/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:33:35 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:33:35 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size + 1);
	return (ptr);
}

// int	main(void)
// {
//      void *mem = ft_strnew(10);
//     if (mem != NULL) {
//         printf("Memory allocated and initialized to 0.\n");
//         free(mem);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }