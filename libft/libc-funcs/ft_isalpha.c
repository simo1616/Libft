/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:27:34 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:27:34 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int main(void)
// {
//     printf("ft_isalpha 1 :%d\n", ft_isalpha('4'));
// 	printf("ft_isalpha 2 :%d\n", ft_isalpha('L'));
//     return (0);
// }