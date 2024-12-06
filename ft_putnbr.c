/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:21 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/06 14:10:18 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += print_string("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count += print_char('-');
		n = -n;
	}
	if (n >= 10)
		count = count + ft_putnbr(n / 10);
	count += print_char(n % 10 + 48);
	return (count);
}
