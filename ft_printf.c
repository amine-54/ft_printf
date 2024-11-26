#include <unistd.h>
#include <stdarg.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_string(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
}

void	ftttt_printf(const char *format, ...)
{
	va_list	args;
	int	i;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				print_char((char)va_arg(args, int));
			else if (format[i] == 's')
				print_string(va_arg(args, char*));
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	va_end(args);
} 

int main()
{
	char *c = "tsthhnnfakyo";
	ftttt_printf("tstalah %s", c);
}
