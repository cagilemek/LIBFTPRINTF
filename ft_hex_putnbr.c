/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:59:53 by ckurtul           #+#    #+#             */
/*   Updated: 2026/04/07 18:59:53 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_putnbr(unsigned long k)
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
