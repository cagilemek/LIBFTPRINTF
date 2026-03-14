#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);

int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(long n);
int ft_uns_putnbr(unsigned int n);

int ft_hex_putnbr(unsigned long k);
int ft_uphex_putnbr(unsigned int k);
int ft_address(void *p);

#endif