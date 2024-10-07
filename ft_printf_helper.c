/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:29:11 by shimi-be          #+#    #+#             */
/*   Updated: 2024/09/30 18:32:20 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printft.h"

void    print_num(int num, char type)
{
    unsigned long   nb;
    if (type == 'u')
    {
        nb = (unsigned int)num;
        ft_putnbr_u(nb);
    }
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
    ft_putstr(str);
}

