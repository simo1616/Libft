/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:35:06 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:35:06 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, ft_strlen(s));
}

// #include <stdio.h>
// int	main() 
// {
//     char str[] = "Hello, Simo!";  
//     printf("Before ft_strclr: %s\n", str);   
//     ft_strclr(str);   
// 	printf("After ft_strclr: %s\n", str);
// 	return 0;
// }