/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:27:52 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:27:52 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main(void)
// {
//     printf("ft_isascii 1 :%d\n", ft_isascii('4'));
// 	printf("ft_isascii 2 :%d\n", ft_isascii('L'));
//     return (0);
// }