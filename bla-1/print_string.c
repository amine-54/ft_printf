int	print_string(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		*s = "(null)";
	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}
