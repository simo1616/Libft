/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:18:31 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:18:31 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}

// int	main(void)
// {
// 	char dest[20] = "Hello, ";
// 	const char *src = "42!";
// 	ft_strncat(dest, src, 3);
// 	printf("Résultat après strncat : %s\n", dest);  // Affichera "Hello, 42!"
// 	return (0);
// }