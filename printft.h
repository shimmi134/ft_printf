/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shimi-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:58:33 by shimi-be          #+#    #+#             */
/*   Updated: 2024/10/04 17:31:56 by shimi-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FTPRINTF_H
# define FTPRINTF_H

// Section 1: Libraries

# include <stdarg.h>
# include <unistd.h>

//Section 2: Functions
int     ft_printf(const char *str, ...);
void    choose_type(char c, va_list args, int* count);
//Section 2.1: ft_printf_helper
void    ft_print_num(int num, char type, int* count);
void    ft_print_dir(void *ptr, int* count);
void    ft_print_str(char *str, int* count);
void    ft_print_char(int chr, int* count);
//Section 2.2: ft_printf_helper
void    ft_putnbr(int num, char c, int* count);
void    ft_putdir(void *ptr, int* count);
void    ft_putnbr_u(unsigned int num, int* count);
void    ft_putnbr_hex(unsigned long num, char c, int* count);


#endif
