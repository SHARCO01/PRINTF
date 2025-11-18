/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_up_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 00:58:53 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/17 23:47:55 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_lw_hexa(unsigned int n)
{
	const char	*hex;
	int			count;

	count = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		count += print_lw_hexa(n / 16);
	count += print_char(hex[n % 16]);
	return (count);
}
