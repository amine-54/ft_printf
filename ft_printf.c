/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:42:29 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/30 10:01:21 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void	ft_putnbr(int n);

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_string(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
}

void print_memory(unsigned long mem)
{
	char	*hex;
	char	hex_mem[16];
	int	i;

	i = 15;
	hex = "0123456789abcdef";
	if (mem == 0)
		write(1, "0x0", 3);
	hex_mem[i] = '\0';
	i--;
	while (mem > 0)
	{
		hex_mem[i] = hex[mem % 16];
		mem = mem / 16;
		i--;
	}
	write(1, "0x", 2);
	write(1, &hex_mem[i + 1], 15 - i);
}

void	ftttt_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				print_char((char)va_arg(args, int));
			else if (format[i] == 's')
				print_string(va_arg(args, char*));
			else if (format[i] == 'p')
				print_memory((unsigned long)va_arg(args, void*));
			else if (format[i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(args, int));


		}
		else
			write(1, &format[i], 1);
		i++;
	}
	va_end(args);
} 

int main()
{
	int c = 1578132;
	ftttt_printf("tstalah %i ghjgy\n", c);
}
