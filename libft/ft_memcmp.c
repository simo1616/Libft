/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:28:59 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:28:59 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*src1;
	const unsigned char	*src2;
	size_t				i;

	src1 = (const unsigned char *)s1;
	src2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && src1[i] == src2[i])
		i++;
	if (i == n)
		return (0);
	return (src1[i] - src2[i]);
}

// int main() {
//     char str1[20] = "Hello, Simo!";
//     char str2[20] = "Hello, Simo!";
//     char str3[20] = "Hello, Sam!";
//     int result;

//     result = ft_memcmp(str1, str2, 20);
//     if (result == 0) {
//         write(1, "str1 and str2 are equal\n", 24);
//     } else {
//         write(1, "str1 and str2 are not equal\n", 28);
//     }

//     result = ft_memcmp(str1, str3, 20);
//     if (result == 0) {
//         write(1, "str1 and str3 are equal\n", 24);
//     } else {
//         write(1, "str1 and str3 are not equal\n", 28);
//     }

//     return 0;
// }