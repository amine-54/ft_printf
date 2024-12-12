/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:33:28 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/12 17:56:04 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *s)
{
	int	count;
	int	temp;

	count = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		if (error_check(&count, print_char(*s)) == -1)
			return (-1);
		s++;
	}
	return (count); //khasek tgad problem dyal sum of -1 f ga3 lfuncs
}
