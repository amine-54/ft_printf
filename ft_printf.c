/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:29 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/30 15:06:08 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	total;

	total = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				total = total + print_char((char)va_arg(args, int));
			else if (format[i] == 's')
				total = total + print_string(va_arg(args, char*));
			else if (format[i] == 'p')
				total = total + print_memory((unsigned long)va_arg(args, void*));
			else if (format[i] == 'd' || format[i] == 'i')
				total = total + ft_putnbr(va_arg(args, int));
			else if (format[i] == 'u')
				total = total + print_unsigned(va_arg(args, unsigned int));
			else if (format[i] == 'x' || format[i] == 'X')
				total = total + print_hex(va_arg(args, unsigned int), format[i]);
			else if (format[i] == '%')
				total = total + print_char(format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			total++;
		}
		i++;
	}
	va_end(args);
	return (total);
} 
