/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <clagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 22:29:09 by clagarci          #+#    #+#             */
/*   Updated: 2024/03/10 17:16:41 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	count_digits(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
/*
* juntar ft_putnbr_uint y ft_putnbr_hex
*/

/*int	ft_putnbr_uint(unsigned int nbr, int fd)
{
	char		module;
	static int	num_printed;

	module = '0';
	if (nbr > 9)
	{
		num_printed++;
		ft_putnbr_uint(nbr / 10, fd);
	}
	module = nbr % 10 + '0';
	write(fd, &module, 1);
	return (num_printed + 1); // +1 por el módulo
}*/

/*int	ft_putnbr_hex(unsigned int nbr, int minus)
{
	int			module;
	char		*base_minus;
	char		*base_mayus;
	static int	num_printed;

	base_minus = "0123456789abcdef";
	base_mayus = "0123456789ABCDEF";
	module = 0;
	if (nbr > 15)
	{
		num_printed++;
		ft_putnbr_hex(nbr / 16, minus);
	}
	module = nbr % 16;
	if (minus == 1)
		write(1, &base_minus[module], 1);
	else
		write(1, &base_mayus[module], 1);
	return (num_printed + 1); // +1 por el módulo
}*/

/*int	ft_putnbr_base(unsigned int nbr, unsigned int base, int minus)
{
	int			module;
	char		*base_minus;
	char		*base_mayus;
	static int	num_printed;

	if (base != 16 && base != 10)
		return (0);
	base_minus = "0123456789abcdef";
	base_mayus = "0123456789ABCDEF";
	module = 0;
	if (nbr > (base - 1))
	{
		num_printed++;
		ft_putnbr_base(nbr / base, base, minus);
	}
	module = nbr % base;
	if (minus == 1)
		write(1, &base_minus[module], 1);
	else
		write(1, &base_mayus[module], 1);
	return (num_printed + 1); // +1 por el módulo
}*/

int	ft_print_hex(unsigned long int nbr)
{
	int		num_printed;
	int		module;
	char	*base;

	base = "0123456789abcdef";
	num_printed = 0;
	module = 0;
	if (nbr > 15)
	{
		num_printed++;
		ft_print_hex(nbr / 16);
	}
	module = nbr % 16;
	write(1, &base[module], 1);
	return (num_printed + 1); // +1 por el módulo
}
int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int			module;
	static int	num_printed;

	if (ft_strlen(base) != 16 && ft_strlen(base) != 10)
		return (0);
	module = 0;
	if (nbr > (ft_strlen(base) - 1))
	{
		num_printed++;
		ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	module = nbr % ft_strlen(base);
	write(1, &base[module], 1);
	return (num_printed + 1); // +1 por el módulo
}

int	print_address(unsigned long p)
{
	int	num_printed;

	num_printed = 0;
	ft_putstr_fd("0x", 1);
	num_printed = 2;
	num_printed += ft_print_hex(p);
	return (num_printed);
}

int	ft_printf(char const *param, ...)
{
	va_list			ap;
	int				d;
	unsigned int	u;
	char			c;
	char			*s;
	void			*p;
	int				char_printed;

	char_printed = 0;
	va_start(ap, param);
	while (*param != '\0')
	{
		if (*param == '%' && *(param + 1) != '\0')
		{
			param++;
			if (*param == 'd' || *param == 'i')
			{
				d = va_arg(ap, int);
				ft_putnbr_fd(d, 1);
				char_printed += count_digits(d);
			}
			else if (*param == 'u')
			{
				u = va_arg(ap, unsigned int);
				//char_printed += ft_putnbr_uint(u, 1);
				//char_printed += ft_putnbr_base(u, 10, 1);
				char_printed += ft_putnbr_base(u, "0123456789");
				//char_printed += count_digits(u, 10);
			}
			else if (*param == 'c')
			{
				c = (char)va_arg(ap, int);
				ft_putchar_fd(c, 1);
				char_printed++;
			}
			else if (*param == 's')
			{
				s = va_arg(ap, char *);
				if (s)
				{
					ft_putstr_fd(s, 1);
					char_printed += ft_strlen(s);
				}
				else
				{
					ft_putstr_fd("(null)", 1);
					char_printed += 6;
				}
			}
			else if (*param == 'x' || *param == 'X')
			{
				u = va_arg(ap, unsigned int);
				if (*param == 'x')
					char_printed += ft_putnbr_base(u, "0123456789abcdef");
					//char_printed += ft_putnbr_base(u, 16, 1);
					//char_printed += ft_putnbr_hex(u, 1);
				else
					char_printed += ft_putnbr_base(u, "0123456789ABCDEF");
					//char_printed += ft_putnbr_base(u, 16, 0);
					//char_printed += ft_putnbr_hex(u, 0);
			}
			else if (*param == 'p')
			{
				p = va_arg(ap, void *);
				char_printed += print_address((unsigned long int)p);
			}
			else if (*param == '%')
			{
				ft_putchar_fd('%', 1);
				char_printed++;
			}
			else
			{
				ft_putchar_fd(*param, 1);
				char_printed++;
			}
			//printf("\nchar_printed %d\n", char_printed);
		}
		else
		{
			ft_putchar_fd(*param, 1);
			char_printed++;
			//printf("\nchar_printed %d\n", char_printed);
		}
		param++;
	}
	va_end(ap);
	return (char_printed);
}
