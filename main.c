#include "ft_printf.h"

int main()
{
	/*
	int tst = -123188;
	int m = ft_printf("the number is %x\n", tst);
	ft_printf("Number of characthers printed: %d\n", m);
	int n = printf("the number is %x\n", tst);
	printf("Number of characters printed: %d\n", n);
	*/
	
	int k = ft_printf(NULL);
	ft_printf("%d\n", k);
	int j = printf(NULL);
	printf("%d", j);
}
