/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:34:40 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:34:40 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[] = "portugal";
// 	char str2[] = "suisse";

// 	printf("str1 est :%s\n", str1);
// 	ft_strcpy(str1, str2);  
// 	printf("str1 devient :%s\n", str1);
// 	return (0);
// }