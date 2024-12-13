/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:56:01 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/13 12:49:33 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		if (error_check(&count, print_unsigned(n / 10)) == -1)
			return (-1);
	}
	if (error_check(&count, print_char(n % 10 + 48)) == -1)
		return (-1);
	return (count);
}
