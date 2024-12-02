/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:34:47 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 16:19:28 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_memory(unsigned long mem)
{
	int	count;
	char	*hex;
	char	hex_mem[17];
	int	i;

	count = 0;
	i = 16;
	hex = "0123456789abcdef";
	if (mem == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	hex_mem[i] = '\0';
	i--;
	while (mem > 0)
	{
		hex_mem[i] = hex[mem % 16];
		mem = mem / 16;
		i--;
	}
	if (write(1, "0x", 2) == -1)
		return (-1);
	count = count + 2;
	if (write(1, &hex_mem[i + 1], 16 - i - 1) == -1)
		return (-1);
	count = count + 16 - i - 1;
	return (count);
}
