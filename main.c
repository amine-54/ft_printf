#include "ft_printf.h"

int main()
{

	/*
	close(1);
	fflush(stdout);
	fprintf(stderr, "%d ", printf("%d", 1250));
	fprintf(stderr, "%d ", ft_printf("%d", 1250));
	*/
       
       /*	
        close(1);
        fprintf(stderr, "%d\n ", ft_printf("%q"));
        fprintf(stderr, "%d\n ", printf("%q"));
	*/

	/*
	int m = ft_printf("%Testhj\n");
	ft_printf("%d\n", m);
	int n = printf("%Testhj\n");
	printf("%d\n", n);
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

	/*
	close(1);
	fprintf(stderr, "%d ", ft_printf("%T_tst"));
	fprintf(stderr, "%d ", printf("%T_tst"));
	*/

	char *s = "tstalahalah";
	int *p = &s;

	int m = ft_printf("%s test hh %p\n", s, p);
	ft_printf("%d\n", m);
	int n = printf("%s test hh %p\n", s, p);
	printf("%d\n", n);
	
	int o = ft_printf("%d tst hh %c\n", -2147483648, 'c');
	ft_printf("%d\n", o);
	int q = printf("%d tst hh %c\n", -2147483648, 'c');
	printf("%d\n", q);

	
	int l = ft_printf("%x tst hh %X\n", 950, 950);
	ft_printf("%d\n", l);
	int b = printf("%x tst hh %X\n", 950, 950);
	printf("%d\n", b);

	int x = ft_printf("%% tst hh %%\n");
	ft_printf("%d\n", x);
	int y = printf("%% tst hh %%\n");
	printf("%d\n", y);


	int w = ft_printf("%%%s tst hh %%\n", s);
	ft_printf("%d\n", w);
	int e = ft_printf("%%%s tst hh %%\n", s);
	printf("%d\n", e);


	int t = ft_printf("%u tst hh %%\n", 4294967295);
	ft_printf("%d\n", t); 
	int j = printf("%u tst hh %%\n", 4294967295);
	ft_printf("%d\n", j);

}

