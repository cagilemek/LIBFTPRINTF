#include "ft_printf.h"

int ft_putnbr(long n)
{
	int count;
	int check;

	count = 0;
	if (n < 0)
	{
		check = ft_putchar('-');
		if (check == -1)
			return (-1);
		count += check;
		n = -n;
	}
	if (n >= 10)
	{
		check = ft_putnbr(n / 10);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_putchar(n % 10 + '0');
	if (check == -1)
		return (-1);
	count += check;
	return (count);
}