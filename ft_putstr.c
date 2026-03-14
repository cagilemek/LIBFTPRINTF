#include "ft_printf.h"

int ft_putstr(char *s)
{
    int i;
    int check;

    i = 0;
    if (!s)
    {
        if (write(1, "(null)", 6) == -1)
            return (-1);
        return (6);
    }
    while (s[i])
    {
        check = ft_putchar(s[i]);
        if (check == -1)
            return (-1);
        i++;
    }
    return (i);
}