/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:56:01 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/30 14:40:46 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int	count;
	char	c;

	count = 0;
	if (n > 10)
		count = count + print_unsigned(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
	count++;
	return (count);
}
