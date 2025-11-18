/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:57:37 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/18 00:53:53 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(char c);
int	print_int(int n);
int	print_string(char *s);
int	print_unsigned_int(unsigned int);
int	print_lw_hexa(unsigned int n);
int	print_up_hexa(unsigned int n);
int	print_address(void *pointer);

#endif
