/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <clagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:15:08 by clagarci          #+#    #+#             */
/*   Updated: 2024/03/14 15:44:58 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_int(int n)
{
	int	num_printed;
	int	aux;

	aux = 0;
	num_printed = 0;
	if (n == INT_MIN)
	{
		num_printed += ft_putstr("-2147483648");
		return (num_printed);
	}
	if (n < 0)
	{
		num_printed += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		num_printed += ft_putnbr_int(n / 10);
	num_printed += ft_putchar(n % 10 + '0');
	return (num_printed);
}

int	ft_putnbr_uint(unsigned int n, char *base)
{
	int		num_printed;
	size_t	len_base;

	num_printed = 0;
	len_base = 0;
	while (base[len_base] != '\0')
		len_base++;
	if (n >= len_base)
		num_printed += ft_putnbr_uint(n / len_base, base);
	num_printed += ft_putchar(base[n % len_base]);
	return (num_printed);
}

int	ft_putnbr_lint(unsigned long int n)
{
	int		num_printed;
	char	*hex;

	hex = "0123456789abcdef";
	num_printed = 0;
	if (n > 15)
		num_printed += ft_putnbr_lint(n / 16);
	num_printed += ft_putchar(hex[n % 16]);
	return (num_printed);
}
