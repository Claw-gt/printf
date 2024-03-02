/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <clagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:55:20 by clagarci          #+#    #+#             */
/*   Updated: 2024/03/02 13:49:35 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(char const *param, ...)
{
	va_list ap;
	int 	d;
	char 	c;
	char	*s;
	
	va_start(ap, param);
	while (*param++)
	{
	}
}