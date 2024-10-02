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

//Section 2: Functions

void    print_num(int num, char type);
void    print_num_hex(int num, char type);
void    print_str(char *str);
void    print_dir(char *str);

#endif
