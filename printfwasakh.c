#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *s)
{
	int	count;
	
	count = 0;
	while(*s)
	{
		write(1, s, 1);
		count++;
		s++;
	}
	return(count);
}

int	print_memory(unsigned long mem)
{
	int	count;
	char	*hex;
	char	hex_mem[17];
	int	i;

	count = 0;
	i = 16;
	hex = "0123456789abcdef";
	if (mem == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	hex_mem[i] = '\0';
	i--;
	while (mem > 0)
	{
		hex_mem[i] = hex[mem % 16];
		mem = mem / 16;
		i--;
	}
	write(1, "0x", 2);
	count = count + 2;
	write(1, &hex_mem[i + 1], 16 - i - 1);
	count = count + 16 - i - 1;
	return (count);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count = count + print_unsigned(n / 10);
	char c = n % 10 + 48;
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_hex(unsigned int n , char c)
{
	int	count;

	count = 0;
	char *hex;
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
		count = count + print_hex(n / 16, c);
	write(1, &hex[n % 16], 1);
	count++;
	return(count);
}
		
int	ftttt_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	total;

	total = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				total = total + print_char((char)va_arg(args, int));
			else if (format[i] == 's')
				total = total + print_string(va_arg(args, char*));
			else if (format[i] == 'p')
				total = total + print_memory((unsigned long)va_arg(args, void*));
			else if (format[i] == 'd' || format[i] == 'i')
				total = total + ft_putnbr(va_arg(args, int));
			else if (format[i] == 'u')
				total = total + print_unsigned(va_arg(args, unsigned int));
			else if (format[i] == 'x' || format[i] == 'X')
				total = total + print_hex(va_arg(args, unsigned int), format[i]);
			else if (format[i] == '%')
				total = total + print_char(format[i]);

		}
		else
		{
			write(1, &format[i], 1);
			total++;
		}
		i++;
	}
	va_end(args);
	return (total);
} 

int main()
{
	int m = ftttt_printf("the number is %d\n", 42);
	ftttt_printf("Number of characthers printed: %d\n", m);
	int n = printf("the number is %d\n", 42);
	printf("Number of characters printed: %d\n", n);
}

