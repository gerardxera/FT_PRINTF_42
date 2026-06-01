/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 10:36:07 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/06/01 10:28:04 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	num;
	int		len;

	num = nbr;
	len = 0;
	if (num < 0)
	{
		len += ft_putchar('-');
		num = num * -1;
	}
	if (num > 9)
	{
		len += ft_putnbr(num / 10);
	}
	len += ft_putchar((num % 10) + '0');
	return (len);
}
