/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:36:42 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 16:47:43 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "string.h"

int main()
{
	/*	
	char *tst = "tst alah cc hh";
	int m = ft_printf("the string is %s\n", tst);
	ft_printf("Number of characthers printed: %d\n", m);
	int n = printf("the string is %s\n", tst);
	printf("Number of characters printed: %d\n", n);
	*/
	
	//int k = ft_printf(NULL);
	//ft_printf("%d\n", k);
	
	/*
	int m = printf("%%\n");
	printf("%d\n", m);
	int n = ft_printf("%%\n");
	ft_printf("%d", n);
	*/
	
	/*
	int m = printf("%");
	printf("%d\n", m);
	int n = ft_printf("%");
	ft_printf("%d\n", n);
	*/

	
	/*char *tst = "amine";
	int m = printf("%s\n", tst);
	printf("%d\n", m);
	int n = ft_printf("%s\n", tst);
	ft_printf("%d\n", n);
	*/

	/*
	int m = printf(NULL);
	printf("%d\n", m);
	int n = ft_printf(NULL);
	ft_printf("%d\n", n);
	*/

	int n = ft_printf("%");
	ft_printf("%d", n);
}
