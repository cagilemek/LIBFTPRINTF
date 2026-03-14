/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 00:52:21 by ckurtul           #+#    #+#             */
/*   Updated: 2026/03/12 17:09:53 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int ft_format(char f, va_list args)
{
	if (f == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (f == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (f == 'p')
		return (ft_address(va_arg(args, void *)));
	if (f == 'd' || f == 'i')
		return (ft_putnbr(va_arg(args, int))); // return ekledik
	if (f == 'u')
		return (ft_uns_putnbr(va_arg(args, unsigned int)));
	if (f == 'x')
		return (ft_hex_putnbr(va_arg(args, unsigned int))); // return ekledik
	if (f == 'X')
		return (ft_uphex_putnbr(va_arg(args, unsigned int)));
	if (f == '%')
		return (ft_putchar('%'));
	return (-1); // Standart hata için -1 daha iyidir
}

int ft_printf(const char *fmt, ...)
{
	va_list args;
	int count;
	int tmp;

	va_start(args, fmt);
	count = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			tmp = ft_format(*fmt, args);
			if (tmp >= 0)
				count += tmp;
		}
		else
			count += ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
	return count;
}
