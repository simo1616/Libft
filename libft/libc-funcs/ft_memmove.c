/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:29:24 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:29:24 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	const unsigned char	*s;
	unsigned char		*d;
	unsigned int		i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

// int main ()
// {
//     char src[20] = "Hello, Simo!";
//     char dest[27];

//     ft_memmove(dest, src, 13);
//     write(1, dest, 13);
//     write(1, "\n", 1);

//     return (0);
// }