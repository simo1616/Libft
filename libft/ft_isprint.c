/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:28:21 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:28:21 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

// int main(void)
// {
//     printf("ft_isprint 1 :%d\n", ft_isprint(12));
// 	printf("ft_isprint 2 :%d\n", ft_isprint('L'));
//     return (0);
// }