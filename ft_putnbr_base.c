/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:32:30 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/27 14:57:56 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long num, const char *base)
{	
	int	len;
	size_t	len_base;
	
	len_base = ft_strlen(base);
	len = 0;
	if (num >= len_base)
	{
		len += ft_putnbr_base(num / len_base, base);
	}
	len += ft_putchar(base[num % len_base]);
	return (len);
}
