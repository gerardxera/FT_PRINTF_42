/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:28:42 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/27 15:29:17 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}
