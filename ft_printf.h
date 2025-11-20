/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:57:37 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/21 00:20:24 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
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
