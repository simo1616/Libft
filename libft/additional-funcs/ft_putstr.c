/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:31:25 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/18 12:31:25 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}
