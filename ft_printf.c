/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:25:02 by shimi-be          #+#    #+#             */
/*   Updated: 2024/10/04 17:32:03 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printft.h"    
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
    va_list args;
    int i;

    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
            choose_type(str[++i], args);
        else
            write(1, &str[i], 1);
        i++;
    }
    va_end(args);
    return (0);
}

void    choose_type(char c, va_list args)
{    
    if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
        print_num(va_arg(args, int), c);
    else if(c == 's')
        print_str(va_arg(args, char *));
    else if (c == 'p')
        print_dir(va_arg(args, char*));
    else if (c == 'c')
        putchar(va_arg(args, int));
    else if (c == '%')
        putchar('%');
}
