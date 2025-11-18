/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:05:28 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/18 02:53:48 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (count += write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		count += print_int(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}
