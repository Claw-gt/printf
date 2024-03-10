/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <clagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:25:15 by clagarci          #+#    #+#             */
/*   Updated: 2024/03/10 19:12:26 by clagarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    //FORMATO CHAR %c
    
    //FORMATO STRING %s
    printf("PRINTF TEST\n");
    printf("void string %s hey", NULL);
    printf("\nFT_PRINTF TEST\n");
    ft_printf("void string %s hey\n", NULL);
    //FORMATO PUNTERO A MEMORIA %p
    printf("PRINTF TEST\n");
    //int i = -1;
    printf("\n");
    printf("char printed: %d", printf("%p", (void*)-124));
    printf("\nFT_PRINTF TEST\n");
    ft_printf("char printed: %d  ",ft_printf("%p", (void*)-124));
    ft_printf("char printed: %d  ",ft_printf("%p", (void*)-124));
    //FORMATO DECIMAL %d
    printf("\n");
    printf("characters printf: %d\n", printf("%d", INT_MIN));
    ft_printf("characters ft_printf: %d\n", ft_printf("%d", INT_MIN));
    //FORMATO ENTERO %i
    //FORMATO ENTERO POSITIVO %u
    printf("\n");
    printf("characters printf: %d\n", printf("%u", -200000));
    ft_printf("characters ft_printf: %d\n", ft_printf("%u", -200000));
    //FORMATO HEXADECIMAL %x %X
    /*printf("\nPRINTF TEST\n");
    printf("\ncharacters printed: %d", printf("Hello %% %x World", -4324));
    printf("\nFT_PRINTF TEST\n");
    ft_printf("\nchar printed: %d", ft_printf("Hello %% %x World", -4324));*/
    //Errores que manejar (formato de argumentos, número de argumentos)
    return (0);
}