/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:29 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 16:47:30 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] != '\0')
			{
				if(format_choice(&total, args, format[i]) == -1)
				{
					va_end(args);
					return (-1);
				}
			}
		}
		else
		{
			if (write(1, &format[i], 1) == -1)
			{
				va_end(args);
				return(-1);
			}
			total++;
		}
		i++;
	}
	va_end(args);
	return (total);
}
