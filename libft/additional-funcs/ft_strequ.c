/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:34:45 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:34:45 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}

// int main()
// {
//     printf("%d\n", ft_strequ("hello", "hello"));  // 1
//     printf("%d\n", ft_strequ("hello", "hella"));  // 0
//     printf("%d\n", ft_strequ("hello", "hell"));   // 0
//     printf("%d\n", ft_strequ("hello", "hello ")); // 0
//     printf("%d\n", ft_strequ("", ""));            // 1
//     return 0;
// }