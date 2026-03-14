int	ft_uns_putnbr(unsigned int b)
{
	int	count;
	int	check;

	count = 0;
	if (b >= 10)
	{
		check = ft_uns_putnbr(b / 10);
		if (check == -1)
			return (-1);
		count += check;
	}
	check = ft_putchar(b % 10 + '0');
	if (check == -1)
		return (-1);
	count += check;
	return (count);
}