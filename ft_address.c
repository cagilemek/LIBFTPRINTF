#include "ft_printf.h"

int ft_address(void *p)
{
    int len;
    int check;

    len = 0;
    if (!p)
        return (ft_putstr("(nil)"));
    check = ft_putstr("0x");
    if (check == -1)
        return (-1);
    len += check;
    check = ft_hex_putnbr((unsigned long)p);
    if (check == -1)
        return (-1);
    len += check;
    return (len);
}