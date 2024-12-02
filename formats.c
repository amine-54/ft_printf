/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:12:55 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 16:21:03 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_choice(int *total, va_list args, const char form)
{
	int	result;

	result = 0;
	if (form == 'c')
		result = print_char((char)va_arg(args, int));
	else if (form == 's')
		result = print_string(va_arg(args, char*));
	else if (form == 'p')
		result = print_memory((unsigned long)va_arg(args, void*));
	else if (form == 'd' || form == 'i')
		result = ft_putnbr(va_arg(args, int));
	else if (form == 'u')
		result = print_unsigned(va_arg(args, unsigned int));
	else if (form == 'x' || form == 'X')
		result = print_hex(va_arg(args, unsigned int), form);
	else if (form == '%')
		result = print_char(form);
	if (result == -1)
		return (-1);
	*total = *total + result;
	return(result);
}
