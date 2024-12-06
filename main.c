/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:36:42 by mmanyani          #+#    #+#             */
/*   Updated: 2024/12/07 23:45:38 by mmanyani         ###   ########.fr       */
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

	/*
	int a = 48845;
	close(1);
	int n = ft_printf("%d\n", a);
	if (n == -1)
		fprintf(stderr, "l7wa");
	*/
	
	/*
	int m = ft_printf("%d", -10);
	ft_printf("\n%d", m);
	*/

	/*
	int *p = NULL;
	int n = printf("%p\n", p);             original katprinti (nil) ????
	printf("%d\n", n);
	int m = ft_printf("%p\n", p);
	ft_printf("%d\n", m);
	*/

	/*
	int a = 5;
	int *p = &a;
	int m = printf("%p\n", p);
	printf("%d\n", m);
	int n = ft_printf("%p\n", p);
	ft_printf("%d\n", n);
	*/

	/*
	int a = 2147483647;
	int b = -2147483648;

	int m = printf("%d %d\n", a, b);
	printf("%d\n", m);
	int n = ft_printf("%d %d\n", a, b);
	ft_printf("%d\n", n);
	*/
	

	/*
	int n = printf("%Thhhh\n");
	printf("%d\n", n);
	int m = ft_printf("%Thhhh\n");
	ft_printf("%d\n", m);
	*/

	/*
	int n = printf("%x\n", -1);
	printf("%d\n", n);
	int m = ft_printf("%x\n", -1);
	ft_printf("%d\n", m);
	*/					//how hh
	

	/*
	close(1);
	int n = printf("%x\n",6598887);
	printf("%d\n", n);
	int m = ft_printf("%x\n", 6598887);
	ft_printf("%d\n", m);

	fprintf(stderr, "%d\n", n);
	fprintf(stderr, "%d\n", m);       tf
	*/

	/*
	close(1);
	int n = printf("grorgr\n");
	int m = ft_printf("grorgr\n");
	fprintf(stderr, "%d\n", n);
	fprintf(stderr, "%d\n", m);
	*/

	/*	
	int a =7895;
	int *p = &a;
	int n = printf("%p hh tst hh kak joj mrat %p %p nn\n", p, p, p);
	printf("%d\n", n);
	int m = ft_printf("%p hh tst hh hak joj mrat %p %p nn\n", p, p, p);
	ft_printf("%d\n", m);
	*/
	
	

	//int *p = NULL;
	/*	
	int m = printf("%p", NULL);
	printf("%d\n", m);
	int n = ft_printf("%p", NULL);
	ft_printf("%d\n", n);
	*/

	/*
	char *s = NULL;
	int n = printf("%s", s);
	printf("%d\n", n);
	int m =ft_printf("%s", s);
	ft_printf("%d\n", m);
	*/

	/*
	int n = printf("%T\n", 15);
	printf("%d\n", n);
	int m = ft_printf("%T\n", 15);
	ft_printf("%d\n", m);
	*/

	/*char *c = "tst";
        int m = printf("%d %q %T %p ", -2147, 'c', c, c);       //jreb hadi f other repos . seraph
        printf("%d\n", m);
        int n = ft_printf("%d %q %T %p ", -2147, 'c', c, c);
        ft_printf("%d\n", n);
	*/

	/*
	printf("%d\n", printf("%s\n", "tst"));
	ft_printf("%d\n", ft_printf("%s\n", "tst"));
	*/

	//printf("%d\n", printf("%x\n", -2));
	//ft_printf("%d\n", ft_printf("%x\n", -2));
	/*
    	printf("%d\n", printf("%x\n", -10));      // Output: fffffff6
    	ft_printf("%d\n", ft_printf("%x\n", -10));      // Output: fffffff6
    	printf("%d\n", printf("%x\n", -2147483648)); // Output: 80000000
    	ft_printf("%d\n", ft_printf("%x\n", -2147483648)); // Output: 80000000
	*/

	/*
	printf("%s\n", NULL);
	ft_printf("%s\n", NULL);	
	*/

	printf("%%%s\n", "tst");
	ft_printf("%%%s\n", "tst");
}
