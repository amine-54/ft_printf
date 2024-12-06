/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:34:47 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/06 14:07:39 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	recursive_call_mem(unsigned long mem, int *count)
{
	if (mem >= 16)
	{
		recursive_call_mem(mem / 16, count);
	}
	if (mem % 16 < 10)
		*count += print_char(mem % 16 + '0');
	else
		*count += print_char(mem % 16 - 10 + 'a');
}

int	print_memory(unsigned long mem)
{
	int	printed;

	printed = 0;
	if (mem == 0)  //in C, a NULL pointer is defined as the integer value 0
		printed += print_string("(nil)");
	else
	{
		printed += print_string("0x");
		recursive_call_mem(mem, &printed);
	}
	return (printed);
}
