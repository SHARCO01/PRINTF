/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:48:17 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/17 23:16:31 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	arg;

	va_start(arg, format);
	i = 0;
	count = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(arg, int));
			else if (format[i] == 's')
				count += print_string(va_arg(arg, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(va_arg(arg, int));
			else if (format[i] == 'u')
				count += print_unsigned_int(va_arg(arg, unsigned int));
			else if (format[i] == 'x')
				count += print_lw_hexa(va_arg(arg, unsigned int));
			else if (format[i] == 'X')
				count += print_up_hexa(va_arg(arg, unsigned int));
			else if (format[i] == 'p')
				count += print_address(va_arg(arg, unsigned long));
			else if (format[i] == '%')
				count += write(1, "%", 1);
		}
		else
			count += write(1, &format[i], 1);
			
		i++;
	}
	va_end(arg);
	return (count);
}
