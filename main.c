#include "ft_printf.h"

int main()
{
	/*
	close(1);
	fflush(stdout);
	fprintf(stderr, "%d ", printf("%s", "tst"));
	fprintf(stderr, "%d ", ft_printf("%s", "tst"));
	*/


	/*
	//close(1);
	int a = 50;
	int *p = &a;
	int n = ft_printf("%p\n", p);
	ft_printf("%d\n", n);
	int m = printf("%p\n", p);
	printf("%d\n", m);
	//fprintf(stderr, "%d %d", n, m);
	*/
	
	/*	
	char *s = "tstalah";
	close(1);
	int m = ft_printf("%d\n", -1250);
	ft_printf("%d\n", m);
	int n = printf("%d\n", -1250);
	printf("%d\n", n);
	fprintf(stderr, "%d %d", m, n);
	*/

	close(1);
	int m = ft_printf("%T_tst\n");
	//ft_printf("%d\n", m);
	int n = printf("%T_tst\n");
	//printf("%d\n", n);
	fprintf(stderr, "%d %d", m, n);
	
	
}
