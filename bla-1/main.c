#include "ft_printf.h"

int main()
{
	/*
	close(1);
        int n = printf("%x\n",6598887);
        printf("%d\n", n);
        int m = ft_printf("%x\n", 6598887);
        ft_printf("%d\n", m);

        fprintf(stderr, "%d\n", n);
        fprintf(stderr, "%d\n", m);
	*/

	/*
	close(1);
	char *s = "abcd";
	int n = printf("%s\n", s);
	fprintf(stderr, "%d\n", n); 
	int m = write(1, s, 4);
	fprintf(stderr, "%d\n", m);
	*/

	int m = printf("%p %p ", 0, 0);
	printf("%d\n", m);
	int n = ft_printf("%p %p ", 0, 0);
	ft_printf("%d\n", n);
}
