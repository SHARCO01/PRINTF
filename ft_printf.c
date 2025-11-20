/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 21:48:17 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/21 00:25:52 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formats(va_list arg, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += print_char(va_arg(arg, int));
	else if (format == 's')
		count += print_string(va_arg(arg, char *));
	else if (format == 'd' || format == 'i')
		count += print_int(va_arg(arg, int));
	else if (format == 'u')
		count += print_unsigned_int(va_arg(arg, unsigned int));
	else if (format == 'x')
		count += print_lw_hexa(va_arg(arg, unsigned int));
	else if (format == 'X')
		count += print_up_hexa(va_arg(arg, unsigned int));
	else if (format == 'p')
		count += print_address(va_arg(arg, void *));
	else if (format == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		printed;
	va_list	arg;

	i = 0;
	printed = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			printed += formats(arg, format[i]);
		}
		else
			printed += print_char(format[i]);
		i++;
	}
	va_end(arg);
	return (printed);
}
