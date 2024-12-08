/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:33:28 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/08 15:50:50 by mmanyani         ###   ########.fr       */
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
		temp = print_string(*s);
		if (temp == -1)
			return (-1);
		else
			count += temp;
		s++;
	}
	return (count); //khasek tgad problem dyal sum of -1 f ga3 lfuncs
}
