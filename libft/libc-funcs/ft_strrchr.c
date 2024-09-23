/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:35:32 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:35:32 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "pourtugal";
// 	char c = 'z';
// 	printf("str devient :%s\n", ft_strrchr(str, c));
// 	return (0);
// }
// /* La fonction strrchr est une fonction standard 
// de la bibliothèque C utilisée pour rechercher 
// la dernière occurrence d'un caractère spécifique
//  dans une chaîne de caractères. 
// Si le caractère est trouvé, strrchr retourne
//  un pointeur vers cet emplacement 
// dans la chaîne. Sinon, elle retourne NULL. */ 