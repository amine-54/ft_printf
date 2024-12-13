/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:12:55 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/13 13:09:55 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_handle(va_list args, const char form)
{
	if (form == 'c')
		return (print_char((char)va_arg(args, int)));
	else if (form == 's')
		return (print_string(va_arg(args, char *)));
	else if (form == 'p')
		return (print_memory((unsigned long)va_arg(args, void *)));
	else if (form == 'd' || form == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (form == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (form == 'x' || form == 'X')
		return (print_hex(va_arg(args, unsigned int), form));
	else if (form == '%')
		return (print_char(form));
	else
	{
		if (print_char('%') == -1 || print_char(form) == -1)
			return (-1);
		return (2);
	}
}

int	format_choice(int *total, va_list args, const char form)
{
	int	result;

	result = format_handle(args, form);
	if (result == -1)
		return (-1);
	*total = *total + result;
	return (result);
}
