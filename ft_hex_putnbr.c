int	ft_hex_putnbr(unsigned int k)
{
	char	*base;
	int		count;
	int		check;

	base = "0123456789abcdef";
	count = 0;
	if (k >= 16)
	{
		check = ft_hex_putnbr(k / 16);
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