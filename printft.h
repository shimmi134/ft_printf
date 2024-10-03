/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:58:33 by shimi-be          #+#    #+#             */
/*   Updated: 2024/09/30 17:04:43 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FTPRINTF_H
# define FTPRINTF_H

// Section 1: Libraries

# include <stdarg.h>
# include <unistd.h>

//Section 2: Functions
int     ft_printf(const char *str, ...);
//Section 2.1: ft_printf_helper
void    print_num(int num, char type);
void    print_dir(char *str);
void    print_str(char *str);

//Section 2.2: ft_printf_helper
void    ft_putstr(char *str);
void    ft_putnbr_base(int num, char c);
void    ft_put_dir(void *ptr);
void    ft_putnbr_u(unsigned int num);


#endif
