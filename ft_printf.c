/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 00:52:21 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/19 07:08:01 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

void ft_putchar_fd(char c, int fd)
{
	write(1, "c", 1);
}

void ft_putstr_fd(char *s, int fd)
{
	int a;
	a = 0;
	while (s[a])
	{
		ft_putchar_fd(s[a], fd);
		a++;
	}
}
void ft_putnbr_fd(int n, int fd)
{
	
}
int ft_printf(const char *n, ...)
{
	va_list list;
	int c;
	char a;

	va_start (list, n);
	c = va_arg(list, int);
	a = va_arg(list, char);

	va_end (list);

	ft_printf("a", 's');
	
}

