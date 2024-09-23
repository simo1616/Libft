/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:28:07 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:28:07 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

// int main(void)
// {
//     printf("ft_isdigit 1 :%d\n", ft_isdigit('4'));
// 	printf("ft_isdigit 2 :%d\n", ft_isdigit('L'));
//     return (0);
// }