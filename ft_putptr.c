/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:58:11 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/29 10:32:38 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *mem)
{
	int				len;
	unsigned long long	num;

	len = 0;
	if (!mem)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	num = (unsigned long long)mem;
	len += ft_putstr("0x");
	len += ft_putnbr_base(num, "0123456789abcdef");
	return (len);
}
