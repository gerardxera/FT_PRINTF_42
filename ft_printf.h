/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:46:53 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/06/01 10:36:22 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_putnbr_base(size_t num, const char *base);
size_t	ft_strlen(const char *str);
int		ft_putptr(void *mem);

#endif
