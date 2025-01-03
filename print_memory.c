/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:34:47 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/13 12:51:24 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	recursive_call_mem(unsigned long mem, int *count)
{
	if (mem >= 16)
	{
		if (recursive_call_mem(mem / 16, count) == -1)
			return (-1);
	}
	if (mem % 16 < 10)
	{
		if (error_check(count, print_char(mem % 16 + '0')) == -1)
			return (-1);
	}
	else
	{
		if (error_check(count, print_char(mem % 16 - 10 + 'a')) == -1)
			return (-1);
	}
	return (0);
}

int	print_memory(unsigned long mem)
{
	int	printed;

	printed = 0;
	if (mem == 0)
	{
		if (error_check(&printed, print_string("(nil)")) == -1)
			return (-1);
	}
	else
	{
		if (error_check(&printed, print_string("0x")) == -1)
			return (-1);
		if (recursive_call_mem(mem, &printed) == -1)
			return (-1);
	}
	return (printed);
}
