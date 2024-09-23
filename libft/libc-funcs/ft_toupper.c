/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:59 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:35:59 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
//     printf("ft_toupper 1 :%d\n", ft_toupper('a'));
// 	printf("ft_toupper 2 :%d\n", ft_toupper('L'));
// 	printf("ft_toupper 3 :%d\n", ft_toupper(' '));
//     return (0);
// }