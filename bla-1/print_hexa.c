#include "ft_printf.h"

int	print_hexa(unsigned int n, char c)
{
	char 	*hex;
	int	count;

	count = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
		count += print_hexa(n / 16, c);
	count += print_char(hex[n % 16]);
	return (count);
}
