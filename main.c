/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <clagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:25:15 by clagarci          #+#    #+#             */
/*   Updated: 2024/03/14 14:58:39 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    //FORMATO CHAR %c
    printf("PRINTF TEST\n");
    printf(" || characters printf [c]: %d", printf("character %c", 57));
    printf("\nFT_PRINTF TEST\n");
    ft_printf(" || characters ft_printf [c]: %d",ft_printf("character %*c", 57));
    //FORMATO STRING %s
    printf("\nPRINTF TEST\n");
    printf(" || characters printf [s] %d", printf("void string %s hey", (char *)NULL));
    printf("\nFT_PRINTF TEST\n");
    ft_printf(" || characters ft_printf [s]: %d",ft_printf("void string %s hey", (char *)NULL));
    //FORMATO PUNTERO A MEMORIA %p
    printf("\nPRINTF TEST\n");
    printf(" || characters printf [p]: %d", printf("%p", ""));
    printf("\nFT_PRINTF TEST\n");
    ft_printf(" || characters ft_printf [p]: %d  ",ft_printf("%p", ""));
    //FORMATO DECIMAL %d
    printf(" || characters printf [d]: %d\n", printf("%d", -3243));
    ft_printf(" || characters ft_printf [d]: %d\n", ft_printf("%d", -3243));
    //FORMATO ENTERO %i
    printf(" || characters printf [i]: %d\n", printf("%i", -200000));
    ft_printf(" || characters ft_printf [i]: %d\n", ft_printf("%i", -200000));
    //FORMATO ENTERO POSITIVO %u
    printf(" || characters printf [u]: %d\n", printf("%u", -200000));
    ft_printf(" || characters ft_printf [u]: %d\n", ft_printf("%u", -200000));
    //FORMATO HEXADECIMAL %x %X
    printf("\nPRINTF TEST\n");
    printf(" || characters printf [X]: %d", printf("Hello %% %X World", UINT_MAX));
    printf(" || characters printf [x]: %d", printf("Hello %% %x World", UINT_MAX));
    printf("\nFT_PRINTF TEST\n");
    ft_printf(" || characters ft_printf [X]: %d", ft_printf("Hello %% %X World", UINT_MAX));
    ft_printf(" || characters ft_printf [x]: %d", ft_printf("Hello %% %x World", UINT_MAX));
    return (0);
}