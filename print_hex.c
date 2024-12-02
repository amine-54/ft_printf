/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:59:14 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 16:20:53 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n , char c)
{
	int	count;
	char	*hex;

	count = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
		count = count + print_hex(n / 16, c);
	if (write(1, &hex[n % 16], 1) == -1)
		return (-1);
	count++;
	return (count);
}
