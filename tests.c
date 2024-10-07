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
#include "libft.h"
#include "printft.h"

int	main(void)
{
    int n = 5;
    int *ptr = &n;

    ft_printf("Hola que tal %p tio\n", ptr);    
    printf("Hola que tal %p tio\n", ptr);    
}
