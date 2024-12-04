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

	count = 0;
	while (s[i])
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}

void	recursive_call_mem(unsigned long long mem, int *count)
{
	if (mem >= 16)
	{
		recursive_call_mem(mem / 16, count);
		recursive_call_mem(mem % 16, count);
	}
	else
	{
		if (mem < 10)
			*count += print_char(mem + '0');
		else
			*count += print_char(mem - 10 + 'a');
	}
}

int	print_memory(unsigned long long mem)
{
	int	printed;

	printed = 0;
	printed += write(1, "0x", 2);
	if (mem == 0)
		printed += write(1, "0", 1);
	else
		recursive_call_mem(mem, &printed);
	return (printed);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_unsigned(n / 10);
	count += print_char(n % 10 + 48);
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
			else if (format[i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(args, int));
			else if (format[i] == 'u')
				print_unsigned(va_arg(args, unsigned int))
