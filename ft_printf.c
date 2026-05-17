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

static int	ft_format(char f, va_list args)
{
	if (f == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (f == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (f == 'p')
		return (ft_address(va_arg(args, void *)));
	if (f == 'd' || f == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (f == 'u')
		return (ft_uns_putnbr(va_arg(args, unsigned int)));
	if (f == 'x')
		return (ft_hex_putnbr(va_arg(args, unsigned int)));
	if (f == 'X')
		return (ft_uphex_putnbr(va_arg(args, unsigned int)));
	if (f == '%')
		return (ft_putchar('%'));
	return (-1);
}

static int	ft_handle_percent(const char **fmt, va_list args, int *count)
{
	int	tmp;

	(*fmt)++;
	if (!**fmt)
		return (-1);
	tmp = ft_format(**fmt, args);
	if (tmp == -1)
	{
		*count += ft_putchar('%');
		*count += ft_putchar(**fmt);
	}
	else
		*count += tmp;
	return (1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		count;

	if (!fmt)
		return (-1);
	count = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			if (ft_handle_percent(&fmt, args, &count) == -1)
			{
				va_end(args);
				return (-1);
			}
		}
		else
			count += ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
	return (count);
}
