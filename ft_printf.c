/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:25:02 by shimi-be          #+#    #+#             */
/*   Updated: 2024/09/30 17:08:09 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printft.h"    
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
    va_list args;
    int i;
    char    *aux_str;
    int aux_int;
    char    aux_char;

    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            if (str[i+1] == 'd' || str[i+1] == 'i' || str[i+1] == 'u' || str[i+1] == 'x' || str[i+1] == 'X')
            {
                aux_int = va_arg(args, int);
                print_num(aux_int, str[i+1]);
                i++;
            }
            else if(str[i+1] == 's')
            {
                aux_str = va_arg (args, char *);
                print_str(aux_str);
                i++;
            }
            else if ((str[i+1]) == 'p')
            {
                aux_str = va_arg(args, char *);
                print_dir(aux_str);
                i++;
            }
            else if (str[i+1] == 'c')
            {
                aux_char = va_arg(args, int);
                write(1, &aux_char, 1);
                i++;
            }
            else if (str[i+1] == '%')
            {
                write(1, &"%", 1);
                i++;
            }
        }
        else
            write(1, &str[i], 1);
        i++;
    }
    va_end(args);
    return (0);
}
