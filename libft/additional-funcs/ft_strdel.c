/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:34:57 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/03 09:34:57 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	free(*as);
	*as = NULL;
}

// int main() 
// {
//     char *str = (char *)malloc(20 * sizeof(char));
//     if (str == NULL)
//         return 1;
//     ft_strdel(&str);
//     printf("str after ft_strdel: %p\n", (void *)str);
//     return 0;
// }