/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:16:22 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/18 02:54:32 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_int(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += print_unsigned_int(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}
