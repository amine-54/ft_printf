/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:34:47 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/04 13:33:03 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	recursive_call_mem(unsigned long mem, int *count)
{
	if (mem >= 16)
	{
		recursive_call_mem(mem / 16, count);
		recursive_call_mem(mem % 16, count);
	}
	else
	{
		if (mem < 10)
			*count += print_char(mem + '0');
		else
			*count += print_char(mem - 10 + 'a');
	}
}

int	print_memory(unsigned long mem)
{
	int	printed;
	
	printed = 0;
	printed += write(1, "0x", 2);
	if (mem == 0)
		printed += write(1, "0", 1);  //ymkn print_string 7sen
	else
		recursive_call_mem(mem, &printed);
	return (printed);
}
