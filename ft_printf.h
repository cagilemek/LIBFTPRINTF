
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int ft_putchar(int c);
void ft_putnbr(int n);
void ft_hex_putnbr(int k);
int ft_putstr(char *s);
int ft_uns_putnbr(unsigned int b);
int ft_uphex_putnbr(unsigned int k);
int ft_address(void *p);

#endif