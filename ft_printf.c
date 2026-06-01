/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:33:49 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/06/01 11:18:11 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(va_list *arg, const char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += ft_putchar(va_arg(*arg, int));
	else if (str == 's')
		len += ft_putstr(va_arg(*arg, char *));
	else if (str == 'p')
		len += ft_putptr(va_arg(*arg, void *));
	else if (str == 'd')
		len += ft_putnbr(va_arg(*arg, int));
	else if (str == 'i')
		len += ft_putnbr(va_arg(*arg, int));
	else if (str == 'u')
		len += ft_putnbr_base(va_arg(*arg, unsigned int),
				"0123456789");
	else if (str == 'x')
		len += ft_putnbr_base((unsigned int)va_arg(*arg, int),
				"0123456789abcdef");
	else if (str == 'X')
		len += ft_putnbr_base((unsigned int)va_arg(*arg, int),
				"0123456789ABCDEF");
	else if (str == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				break ;
			len += ft_formats(&arg, str[i + 1]);
			i++;
		}
		else
		{
			len += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(arg);
	return (len);
}
