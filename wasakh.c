#include <stdio.h>
#include <unistd.h>

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *s)
{
	int	count;

	count = 0
	while (s[i])
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}

int	print_memory(unsigned long long mem)
{
	char *hex;
	char hex_mem[17];
	int	i;
	int	count;

	i = 0;
	count = 0;
	hex = "0123456789abcdef";
	if (mem == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	while (mem >= 16)
		print_memory(mem / 16);
	//raj3 recursivity, o gad dkchi li knti ktbti 9bel
	write(1, "0x", 2);
	while (mem > 0)
	{
		hex_mem[i] = hex[mem % 16];
		i++;
		mem = mem / 16;
	}
	write(1, hex_mem, 16 - i - 1);
	return (count);
}
int	ft_printf(const char *format, ...)
{
	int	i;
	int	total;
	va_list	args;

	if (format == NULL)
		return (-1);
	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				total += print_char(va_arg(args, char));
			else if (format[i] == 's')
				total += print_string(va_arg(args, char*));
			else if (format[i] == 'p')
				total += print_memory((unsigned long long)va_arg(args, void*));
