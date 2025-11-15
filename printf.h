/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:22:07 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/15 23:06:51 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define	HEX_LC "0123456789abcdef"
# define	HEX_U_C "0123456789ABCDEF"
# define	DEC	"0123456789"

int		ft_printf(const char *, ...);
int		print_char(char c);
int		ft_putstr(char *s)
void	print_int(int n);
//int		ft_atoi(const char *str);
//size_t	ft_strlen(char *s);
void	print_up_hexa(int n);
void	print_lw_hexa(int n);


#endif
