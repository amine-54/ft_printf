#include "ft_printf.h"

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

	char *tst = NULL;
	int m = printf("%s\n", tst);
	printf("%d\n", m);
	int n = ft_printf("%s\n", tst);
	ft_printf("%d\n", n);
}
