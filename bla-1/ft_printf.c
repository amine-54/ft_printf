int	looping(const char form, va_list args)
{
	int result;

	result = 0;
	if (form == 'c')
		result += print_char(va_arg(args, char));
	else if (form == 's')
		result += print_string(va_arg(args, char *));
	else if (form == 'p')
		result += print_memory((unsigned long)(va_arg(args, void *)));
	else if (form == 'd' || form == 'i')
		result += print_decimal(va_arg(args, int));
	else if (form == 'u')
		result += print_unsigned(va_arg(args, unsigned int));
	else if



int	ft_printf(const char *format, ...)
{
	int	i;
	int	total;
	va_list args;

	i = 0;
	total = 0;
	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			total += looping(format[i], args)

