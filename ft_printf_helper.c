/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:29:11 by shimi-be          #+#    #+#             */
/*   Updated: 2024/10/04 18:46:17 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printft.h"

void    print_num(int num, char type)
{
    if (type == 'u')
        ft_putnbr_u((unsigned int)num);
    else
    ft_putnbr_base(num, type);
}

void    print_dir(char  *str)
{
    char **dir;

    dir = &str;
    ft_put_dir(dir);
}

void    print_str(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

void    putchar(int chr)
{
    write(1, &chr, 1);
}

