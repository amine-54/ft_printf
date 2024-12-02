/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:36:42 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/02 18:20:24 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "string.h"
#include "limits.h"

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

	/*
	int a = -2147483648;
	int b = 0;
	printf("%d %d\n", a, b);
	ft_printf("%d %d", a, b);
	*/
	

	/*
	int a = 15879;
	char c = 't';
	char *tst = "tst alah hh";
	int *aa = &a;

	printf("hado random chars %d  rdm chars mora int %c chars bo7do hh  %s %p pchakh 3la hexa\n", a, c, tst, aa); 
	ft_printf("hado random chars %d  rdm chars mora int %c chars bo7do hh  %s %p pchakh 3la hexa\n", a, c, tst, aa); 
	*/

	
	int a = 48845;
	ft_printf("%d\n", a);
	ft_printf("%d\n", a);
	ft_printf("%d\n", a);

}
