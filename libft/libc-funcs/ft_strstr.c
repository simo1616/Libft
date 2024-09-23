/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:42 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:35:42 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str1[] = "Hella wprjh hello simo";
// 	char str2[] = "hello ";
// 	printf("str devient :%s\n", ft_strstr(str1, str2));
// 	return (0);
// }
// //La fonction strstr est une fonction standard 
// de la bibliothèque C utilisée pour 
// //trouver la première occurrence d'une 
// sous-chaîne (aiguille) dans une chaîne 
// //(meule de foin). Si la sous-chaîne est trouvée, 
// strstr retourne un pointeur vers 
// //le début de cette occurrence dans la chaîne principale. 
// //Si la sous-chaîne n'est pas trouvée, 
// elle retourne NULL.