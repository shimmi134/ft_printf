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
    int count;

    count = 0;
    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
            choose_type(str[++i], args, &count);
        else
            ft_print_char(str[i], &count);
        i++;
    }
    va_end(args);
    return (count);
}

void    choose_type(char c, va_list args, int* count)
{    
    if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
        ft_print_num(va_arg(args, int), c, count);
    else if(c == 's')
        ft_print_str(va_arg(args, char *), count);
    else if (c == 'p')
        ft_print_dir(va_arg(args, void*), count);
    else if (c == 'c')
        ft_print_char(va_arg(args, int), count);
    else if (c == '%')
        ft_print_char('%', count);
}
