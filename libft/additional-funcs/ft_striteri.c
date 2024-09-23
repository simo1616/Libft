/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:34:25 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:34:25 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void to_uppercase_at_even_indices(unsigned int index, char *c) 
// {
//     if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }
// int main() 
// {
//     char str[] = "Hello, Simo!";
//     printf("Before ft_striteri: %s\n", str);
//     ft_striteri(str, to_uppercase_at_even_indices);
//     printf("After ft_striteri: %s\n", str);
//     return 0;
// }