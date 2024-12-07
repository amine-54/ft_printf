/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:33:28 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/07 23:41:04 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		count += print_char(*s);
		s++;
	}
	return (count);
}
