/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:34:55 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/19 15:34:55 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main() {
//     const char *str = "Hello, Simo!";
//     char *dup;

//     dup = ft_strdup(str);
//     if (dup != NULL) {
//         write(1, dup, ft_strlen(dup));
//         write(1, "\n", 1);
//         free(dup);
//     } else {
//         write(1, "Memory allocation failed\n", 25);
//     }

//     return 0;
// }