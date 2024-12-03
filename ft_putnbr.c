/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:21 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/03 15:17:22 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	m;
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		count = 2;
		count = count + ft_putnbr(147483648);
		return (count);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	if (n >= 10)
		count = count + ft_putnbr(n / 10);
	m = n % 10 + 48;
	if (write(1, &m, 1) == -1)
		return (-1);
	count++;
	return (count);
}
