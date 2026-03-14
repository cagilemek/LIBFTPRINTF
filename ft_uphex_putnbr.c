#include "ft_printf.h"

int ft_uphex_putnbr(unsigned int k)
{
    char *base;
    int count;
    int check;

    base = "0123456789ABCDEF";
    count = 0;
    if (k >= 16)
    {
        check = ft_uphex_putnbr(k / 16);
        if (check == -1)
            return (-1);
        count += check;
    }
    check = ft_putchar(base[k % 16]);
    if (check == -1)
        return (-1);
    count += check;
    return (count);
}