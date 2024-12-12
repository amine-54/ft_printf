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

	//close(1);
	unsigned int m = ft_printf("%x\n", 2566601);
	ft_printf("%d\n", m);
	unsigned int n = printf("%x\n", 2566601);
	printf("%d\n", n);
	//fprintf(stderr, "%d %d", m, n);
}
