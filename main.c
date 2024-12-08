#include "ft_printf.h"

int main()
{
	/*
	close(1);
	fflush(stdout);
	fprintf(stderr, "%d ", printf("%s", "tst"));
	fprintf(stderr, "%d ", ft_printf("%s", "tst"));
	*/

	close(1);
	int n = ft_printf("%d", 1250);
	fprintf(stderr, "%d", n);
}
