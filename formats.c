/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:12:55 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 13:44:48 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_choice(int *total, va_list args, const char form)
{
	if (form == 'c')
		*total = *total + print_char((char)va_arg(args, int));
	else if (form == 's')
		*total = *total + print_string(va_arg(args, char*));
	else if (form == 'p')
		*total = *total + print_memory((unsigned long)va_arg(args, void*));
	else if (form == 'd' || form == 'i')
		*total = *total + ft_putnbr(va_arg(args, int));
	else if (form == 'u')
		*total = *total + print_unsigned(va_arg(args, unsigned int));
	else if (form == 'x' || form == 'X')
		*total = *total + print_hex(va_arg(args, unsigned int), form);
	else if (form == '%')
		*total = *total + print_char(form);
}
