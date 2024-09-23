/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:18 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:35:18 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j]
			&& (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str1[] = "Hello SIMO";
// 	char str2[] = "Hello ";
// 	printf("str devient :%s\n", ft_strnstr(str1, str2, 4));
// 	return (0);
// }
// //ft_strnstr est une fonction similaire à ft_strstr, 
// mais avec une différence clé : elle ne 
// //recherche la sous-chaîne que dans 
// les premiers n caractères de la chaîne principale. 
// //Cela signifie que ft_strnstr cherche 
// la première occurrence de needle dans 
// //les premiers n caractères de haystack 
// et retourne un pointeur 
// vers le début de cette occurrence. 
// //Si needle n'est pas trouvé dans 
// cette limite, elle retourne NULL.