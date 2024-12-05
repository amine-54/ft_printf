int	print_decimal(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (print_string("-2147483648"));
	if (n < 0)
	{
		count += print_char('-');
		n = -n;
	}
	if (n >= 10)
		count += print_decimal(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}
