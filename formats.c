/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:12:55 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/04 17:31:01 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_choice(int *total, va_list args, const char *form)
{
	int	result;

	result = 0;
	if (*(form + 1) == 'c')
		result = print_char((char)va_arg(args, int));
	else if (*(form + 1) == 's')
		result = print_string(va_arg(args, char*));
	else if (*(form + 1)== 'p')
		result = print_memory((unsigned long)va_arg(args, void*));
	else if (*(form + 1) == 'd' || *(form + 1) == 'i')
		result = ft_putnbr(va_arg(args, int));
	else if (*(form + 1) == 'u')
		result = print_unsigned(va_arg(args, unsigned int));
	else if (*(form + 1) == 'x' || *(form + 1) == 'X')
		result = print_hex(va_arg(args, unsigned int), *(form + 1));
	else if (*(form + 1) == '%')
		result = print_char(*(form + 1));
	/*else
	{
		result = print_char('%');
		result += print_string(form + 1);
	}
	*/
	if (result == -1)
		return (-1);
	*total = *total + result;
	return(result);
}
