/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:29:37 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/21 00:24:45 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_long_hexa(unsigned long n)
{
	const char	*hex;
	int			count;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += print_long_hexa(n / 16);
	count += print_char(hex[n % 16]);
	return (count);
}

int	print_address(void *pointer)
{
	int				count;
	unsigned long	p;

	count = 0;
	if (!pointer)
		return (print_string("(nil)"));
	p = (unsigned long)pointer;
	count += print_string("0x");
	count += print_long_hexa(p);
	return (count);
}
