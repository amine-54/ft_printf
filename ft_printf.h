/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:31:47 by mmanyani          #+#    #+#             */
/*   Updated: 2024/11/30 15:05:33 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	print_char(char c);
int	print_memory(unsigned long mem);
int	print_string(char *s);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned int n, char c);

#endif
