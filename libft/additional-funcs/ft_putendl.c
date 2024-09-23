/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:42:55 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/18 12:42:55 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}

// #include <stdio.h>

// int main()
// {
//     ft_putendl("Hello, World!");
//     return 0;
// }

// int ft_strlen(const char *str)
// {
//     int i;

//     i = 0;
//     while(str[i])
//         i++;
//     return (i);
// }
