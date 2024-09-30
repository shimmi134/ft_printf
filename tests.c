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
int	vadd(int args, ...)
{
	va_list	sum;
    int i = args;
    int result = 0;

	va_start (sum, args);
    
	while (i > 0)
	{
        result += va_arg(sum, int);
        i--;
	}
    va_end(sum);
    return (result);
}

int	main(void)
{
	printf("%u\n", -5);
}
