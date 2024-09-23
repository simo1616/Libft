/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:27:22 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:27:22 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>

// int main(void)
// {
//     printf("ft_isalnum 1 :%d\n", ft_isalnum('4'));
// 	printf("ft_isalnum 2 :%d\n", ft_isalnum(','));
//     return (0);
// }