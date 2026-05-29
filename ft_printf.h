/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:46:53 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/29 10:31:40 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h> //malloc
# include <unistd.h> //write
# include <stdarg.h> //funciones variadicas
# include <stdio.h>  //printf

int	ft_printf(char const *, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putnbr_base(unsigned long long num, const char *base);
size_t	ft_strlen(const char *str);
int	ft_putptr(void *mem);

#endif
