static void	recursive_mem(unsigned long mem, int *count)
{
	if (mem >= 16)
		recursive_mem(mem / 16);
	if (mem % 16 < 10)
		*count += print_char(mem % 16 + '0');
	else
		*count += print_char(mem % 16 - 10 + 'a');
}

int	print_memory(unsigned long mem)
{
	int	printed;

	printed = 0;
	if (mem == 0)
		printed += print_string("(nil)");
	else
	{
		printed += print_string("0x");
		recursive_mem(mem, &printed);
	}
	return (printed);
}
