/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:32:45 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:32:45 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char str1[] = "portugal";
// 	char str2[] = "la suisse est un grand pays";

// 	printf("str1 est :%s\n", str1);
// 	ft_strncpy(str1, str2, 8);  
// 	printf("str1 devient :%s\n", str1);
// 	return (0);
// }