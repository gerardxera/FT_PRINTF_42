/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:27:27 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/29 16:28:14 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	c1;
	int	c2;
	int	s1;
	int	s2;
	int	p1;
	int	p2;
	int	d1;
	int	d2;
	int	i1;
	int	i2;
	int	u1;
	int	u2;
	int	x1;
	int	x2;
	int	X1;
	int	X2;
	int	G1;
	int	G2;
	
	// caracter c
	printf("Caracter %%c\n");
	c1 = ft_printf("42 %c\n", 'G');
	c2 = printf("42 %c\n", 'G');
	printf("Custom %d\n Original%d\n\n", c1, c2);
	// string %s
	printf("string %%s\n");
	s1 = ft_printf("42 %s\n", "hola");
	s2 = printf("42 %s\n", "hola");
	printf("Custom %d\n Original%d\n\n", s1, s2);
	// puntero %p
	int	num;
	int	*ptr;
	num = 42;
	ptr = &num;
	printf("string %%p\n");
	p1 = ft_printf("42 %p\n", ptr);
	p2 = printf("42 %p\n", ptr);
	printf("Custom %d\n Original%d\n\n", p1, p2);
	// integer %d
	printf("integer %%d\n");
	d1 = ft_printf("42 %d\n", 100);
	d2 = printf("42 %d\n", 100);
	printf("Custom %d\n Original%d\n\n", d1, d2);
	// integer %i
	printf("integer %%i\n");
	i1 = ft_printf("42 %i\n", 100);
	i2 = printf("42 %i\n", 100);
	printf("Custom %d\n Original%d\n\n", i1, i2);
	// integer %u
	printf("integer sin negativo %%u\n");
	u1 = ft_printf("42 %u\n", 100);
	u2 = printf("42 %u\n", 100);
	printf("Custom %d\n Original%d\n\n", u1, u2);
	// integer %x
	printf("hexadecimal base16 minusculas %%x\n");
	x1 = ft_printf("42 %x\n", 100);
	x2 = printf("42 %x\n", 100);
	printf("Custom %d\n Original%d\n\n", x1, x2);
	// integer %X
	printf("hexadecimal base16 mayusculas %%X\n");
	X1 = ft_printf("42 %X\n", 100);
	X2 = printf("42 %X\n", 100);
	printf("Custom %d\n Original%d\n\n", X1, X2);
	// imprimir el símbolo %
	printf("imprimir el símbolo %%\n");
	G1 = ft_printf("42 %%%\n");
	G2 = printf("42 %%%\n");
	printf("Custom %d\n Original%d\n\n", G1, G2);
	return (0);
}
