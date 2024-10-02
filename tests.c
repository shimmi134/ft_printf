/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:38:22 by shimi-be          #+#    #+#             */
/*   Updated: 2024/09/30 17:55:44 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>	
#include <stdio.h>
#include <unistd.h>
void	vadd(char *str, ...)
{
	va_list	lorf;
    int i;
    char    c;

    i = 0;
	va_start (lorf, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            c = va_arg(lorf, int);
            write(1, &c, 1);
            i++;
        }
        else
            write (1, &str[i], 1);
        i++;
    }
    va_end(lorf);
}

int	main(void)
{
    char    c;
    c = 'c';
    vadd ("Hola que tal %c tio\n", c);    
}
