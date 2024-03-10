/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clagarci <clagarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:25:15 by clagarci          #+#    #+#             */
/*   Updated: 2024/03/10 15:38:02 by clagarci         ###   ########.fr       */
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
    //FORMATO DECIMAL %d
    printf("\nPRINTF TEST\n");
    printf("characters %d", printf("%d", -42));
    printf("\nFT_PRINTF TEST\n");
    ft_printf("%d", -42);
    //FORMATO ENTERO %i
    //FORMATO ENTERO POSITIVO %u
    //FORMATO HEXADECIMAL %x %X
    printf("\nPRINTF TEST\n");
    printf("\ncharacters printed: %d", printf("Hello %% %x World", -4324));
    printf("\nFT_PRINTF TEST\n");
    ft_printf("\nchar printed: %d", ft_printf("Hello %% %x World", -4324));
    //Errores que manejar (formato de argumentos, número de argumentos)
    return (0);
}