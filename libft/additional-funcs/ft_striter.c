/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:34:34 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:34:34 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}

// void toto_uppercase(char *c) 
// {
//     if (*c >= 'a' && *c <= 'z') 
//         *c = *c - 32;
// }
// int main() 
// {
//     char str[] = "Hello, Simo!";
//     printf("Before ft_striter: %s\n", str);
//     ft_striter(str, toto_uppercase);
//     printf("After ft_striter: %s\n", str);
//     return 0;
// }