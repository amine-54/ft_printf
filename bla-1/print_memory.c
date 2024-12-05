int	print_memory(unsigned long mem)
{
	if (mem >= 16)
		print_memory(mem / 16);
	if (mem % 16 >= 10)
	{
		print_char
