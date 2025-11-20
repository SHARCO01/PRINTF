/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:14:09 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/19 21:24:15 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	int	len;

	len = 0;
	if (!s)
		s = "(null)";
	while (s[len])
		len++;
	return (write(1, s, len));
}
