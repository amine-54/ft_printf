/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:29 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/06 14:58:41 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	looping(const char *format, va_list args, int *total)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] != '\0')
			{
				if (format_choice(total, args, format[i]) == -1)
					return (-1);
			}
		}
		else
		{
			if (print_char(format[i]) == -1)
				return (-1);
			(*total)++;
		}
		i++;
	}
	return (*total);
}

int	ft_printf(const char *format, ...)
{
	int		total;
	va_list	args;

	if (format == NULL)
		return (-1);
	total = 0;
	va_start(args, format);
	if (looping(format, args, &total) == -1)
	{
		va_end(args);
		return (-1);
	}
	return (total);
}
