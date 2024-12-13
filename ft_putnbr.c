/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:21 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/13 12:49:18 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		if (error_check(&count, print_string("-2147483648")) == -1)
			return (-1);
		return (count);
	}
	if (n < 0)
	{
		if (error_check(&count, print_char('-')) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		if (error_check(&count, ft_putnbr(n / 10)) == -1)
			return (-1);
	}
	if (error_check(&count, print_char(n % 10 + 48)) == -1)
		return (-1);
	return (count);
}
