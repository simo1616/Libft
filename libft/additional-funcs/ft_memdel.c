/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:35:17 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:35:17 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_memdel(void **ap)
{
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = NULL;
}

// int main() 
// {
//     char *str = (char *)malloc(20 * sizeof(char));

//     if (str == NULL)
//         return 1;
//     int i;
// 	i = 0;
// 	while (i < 20) 
// 	{
//         str[i] = 'A';
// 		i++;
//     }
//     printf("Before ft_memdel: str = %p\n", (void *)str);
//     ft_memdel((void **)&str);
//     printf("After ft_memdel: str = %p\n", (void *)str);
//     return 0;
// }