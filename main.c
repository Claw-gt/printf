/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <clagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:25:15 by clagarci          #+#    #+#             */
/*   Updated: 2024/03/16 16:17:23 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    //FORMATO CHAR %c
    printf("\nFORMATO CHAR\n");
    printf(" || characters printf [c]: %d\n", printf("character %c", 57));
    ft_printf(" || characters ft_printf [c]: %d\n",ft_printf("character %c", 57));
    //FORMATO STRING %s
    printf("\n");
    printf("\nFORMATO STRING\n");
    printf(" || characters printf [s] %d\n", printf("void string %s hey", (char *)NULL));
    ft_printf(" || characters ft_printf [s]: %d\n",ft_printf("void string %s hey", (char *)NULL));
    //FORMATO PUNTERO A MEMORIA %p
    printf("\n");
    printf("\nFORMATO POINTER\n");
    printf(" || characters printf [p]: %d\n", printf("%p", (void *)-14523));
    ft_printf(" || characters ft_printf [p]: %d\n",ft_printf("%p", (void *)-14523));
    //FORMATO DECIMAL %d
    printf("\n");
    printf("\nFORMATO DECIMAL\n");
    printf(" || characters printf [d]: %d\n", printf("%d", -3243));
    ft_printf(" || characters ft_printf [d]: %d\n", ft_printf("%d", -3243));
    //FORMATO ENTERO %i
    printf("\n");
    printf("\nFORMATO ENTERO\n");
    printf(" || characters printf [i]: %d\n", printf("%i", -200000));
    ft_printf(" || characters ft_printf [i]: %d\n", ft_printf("%i", -200000));
    //FORMATO ENTERO POSITIVO %u
    printf("\n");
    printf("\nFORMATO ENTERO POSITIVO\n");
    printf(" || characters printf [u]: %d\n", printf("%u", -200000));
    ft_printf(" || characters ft_printf [u]: %d\n", ft_printf("%u", -200000));
    //FORMATO HEXADECIMAL %x %X
    printf("\n");
    printf("\nFORMATO HEXADECIMAL\n");
    printf(" || characters printf [X]: %d\n", printf("Hello %% %X World", UINT_MAX));
    printf(" || characters printf [x]: %d\n", printf("Hello %% %x World", UINT_MAX));
    printf("\n");
    ft_printf(" || characters ft_printf [X]: %d\n", ft_printf("Hello %% %X World", UINT_MAX));
    ft_printf(" || characters ft_printf [x]: %d\n", ft_printf("Hello %% %x World", UINT_MAX));
    printf("\n****************************END****************************\n");
    return (0);
}