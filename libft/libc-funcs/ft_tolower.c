/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:50 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:35:50 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
//     printf("ft_tolower 1 :%d\n", ft_tolower('a'));
// 	printf("ft_tolower 2 :%d\n", ft_tolower('L'));
// 	printf("ft_tolower 3 :%d\n", ft_tolower(' '));
//     return (0);
// }