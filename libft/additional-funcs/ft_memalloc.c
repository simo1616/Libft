/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:35:26 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:35:26 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

// int	main(void)
// {
//      void *mem = ft_memalloc(10);
//     if (mem != NULL) {
//         printf("Memory allocated and initialized to 0.\n");
//         free(mem);
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }
