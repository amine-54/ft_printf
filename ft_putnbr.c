/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:21 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/04 15:23:31 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += print_string("-2");
		//write(1, "2", 1);
		//count = 2;
		count = count + ft_putnbr(147483648);
		return (count);
	}
	if (n < 0)
	{
		//write(1, "-", 1);
		count += print_char('-');
		//count++;
		n = -n;
	}
	if (n >= 10)
		count = count + ft_putnbr(n / 10);
	count += print_char(n % 10 + 48);
	//if (write(1, &m, 1) == -1)
		//return (-1);
	//count++;
	return (count);
}
