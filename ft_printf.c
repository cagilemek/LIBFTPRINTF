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

#include<stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_putchar (int c)
{
	write(1, &c, 1);
	return 1;
}

void ft_putnbr (int n)
{
	if(n<0)
	{
		ft_putchar('-');
		n = -n;
	}
	if(n>=10)
	{
		ft_putnbr(n/10);
	}
	ft_putchar(n % 10 + '0');
}

void ft_uns_putnbr(int b)
{
	if (b >= 10)
		ft_uns_putnbr(b / 10);
	ft_putchar(b % 10 + '0');
}

void ft_hex_putnbr (int k)
{
	char *base = "0123456789abcdef";

	if(k >= 16)
		ft_hex_putnbr(k / 16);
	ft_putchar(base[k % 16]);
}

void ft_uphex_putnbr (int k)
{
	char *base = "0123456789ABCDEF";

	if(k >= 16)
		ft_uphex_putnbr(k / 16);
	ft_putchar(base[k % 16]);
}


int ft_printf(const char *format, ...)
{
	int a;
	va_list ar;

	va_start(ar, format);

	while (*format)
	{
		if(*format == '%')
		{
			format++;
			{
				if (*format == 'd' || *format == 'i')
				{
					a = va_arg(ar, int); // argümanı al
					ft_putnbr(a);         // ekrana yaz
				}
				else if (*format == 'c')
				{
					a = va_arg(ar, int);
					ft_putchar(a);
				}
				else if (*format == 's')
				{
					char *string;
					string = va_arg(ar, char *);
					while (*string)
					{
						ft_putchar (*string);
						string++;
					}
				}
				else if (*format == 'u')
				{
					unsigned int b;
					b = va_arg(ar, unsigned int);
					ft_uns_putnbr(b);
				}
				else if(*format == 'x')
				{
					unsigned int m;
					m = va_arg(ar, unsigned int);
					ft_hex_putnbr(m);
				}
				else if (*format == 'X')
				{
					unsigned int h;
					h = va_arg(ar, unsigned int);
					ft_uphex_putnbr(h);
				}
				else if (*format == '%')
				{
					int a;
					a = '%';
					ft_putchar(a);
				}
				else if(*format == 'p')
				{
					
				}
				format++;
			}
		}
		else
		{
			ft_putchar(*format);
			format++;
		}
	}

	va_end(ar);
	return 0;
}
int main()
{
	int *p = NULL;
	ft_printf("%d", ft_printf("merhaba"));
}
