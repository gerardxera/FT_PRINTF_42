/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:58:11 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/06/01 10:25:44 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *mem)
{
	int			len;
	size_t		num;

	len = 0;
	if (!mem)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	num = (size_t)mem;
	len += ft_putstr("0x");
	len += ft_putnbr_base(num, "0123456789abcdef");
	return (len);
}
