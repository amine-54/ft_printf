/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:29 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 18:53:42 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	looping(const char *format, va_list args, int *total)
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
			if (write(1, &format[i], 1) == -1)
				return (-1);
			(*total)++;
		}
		i++;
	}
	return (*total);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		total;
	va_list	args;

	if (format == NULL)
		return (-1);
	total = 0;
	i = 0;
	va_start(args, format);
	if (looping(format, args, &total) == -1)
	{
		va_end(args);
		return (-1);
	}
	return (total);
}
