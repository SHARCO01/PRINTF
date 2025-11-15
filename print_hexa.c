/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaghrai <ilaghrai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 22:29:06 by ilaghrai          #+#    #+#             */
/*   Updated: 2025/11/15 23:41:39 by ilaghrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	print_up_hexa(int n)
{
	const	char *hex;

	hex = "0123456789ABCDEF";
	if (n >= 16)
		print_lw_hexa(n / 16);
	return print_char(hex[n % 16]);
}

void	print_lw_hexa(int n)
{
	const	char *hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		print_lw_hexa(n / 16);
	return print_char(hex[n % 16]);
}
int main()
{
	printf("%d", print_lw_hexa(16));
}
