/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:59:14 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/13 12:49:45 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, char c)
{
	char	*hex;
	int		count;

	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	count = 0;
	if (n >= 16)
	{
		if (error_check(&count, print_hex(n / 16, c)) == -1)
			return (-1);
	}
	if (error_check(&count, print_char(hex[n % 16])) == -1)
		return (-1);
	return (count);
}
