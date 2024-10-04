/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:18:24 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/20 10:18:24 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*strj;

	if (!s)
		return ;
	strj = ft_strjoin(s, "\n");
	if (!strj)
		return ;
	ft_putstr_fd(strj, fd);
	free(strj);
}
