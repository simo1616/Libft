/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:33:46 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:33:46 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}

// int main() 
// {
//     printf("%d\n", ft_strnequ("hello", "hells", 4));  // 1
//     printf("%d\n", ft_strnequ("hello", "hella", 5));  // 0
//     printf("%d\n", ft_strnequ("hello", "hell", 5));   // 0
//     printf("%d\n", ft_strnequ("hello", "hello ", 5)); // 0
//     printf("%d\n", ft_strnequ("", "", 2));            // 1
//     return 0;
// }
