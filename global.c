#include "ft_printf.h"


int     format_choice(int *total, va_list args, const char form)
{
        int     result;

        result = 0;
        if (form == 'c')
                result = print_char((char)va_arg(args, int));
        else if (form == 's')
                result = print_string(va_arg(args, char*));
        else if (form== 'p')
                result = print_memory((unsigned long)va_arg(args, void*));
        else if (form + 1 == 'd' || form == 'i')
                result = ft_putnbr(va_arg(args, int));
        else if (form == 'u')
                result = print_unsigned(va_arg(args, unsigned int));
        else if (form == 'x' || form == 'X')
                result = print_hex(va_arg(args, unsigned int), form);
        else if (form == '%')
                result = print_char(form);
        else
        {
                result = print_char('%');
                result += print_char(form);
        }
        if (result == -1)
                return (-1);
        *total = *total + result;
        return(result);
}

int     ft_putnbr(int n)
{
        int     count;

        count = 0;
        if (n == -2147483648)
        {
                //count += print_string("-2");
                write(1, "2", 1);
                count = 2;
                count = count + ft_putnbr(147483648);
                return (count);
        }
        if (n < 0)
        {
                write(1, "-", 1);
                //count += print_char('-');
                count++;
                n = -n;
        }
        if (n >= 10)
                count = count + ft_putnbr(n / 10);
        //count += print_char(n % 10 + 48);
        char m = n % 10 + 48;
        if (write(1, &m, 1) == -1)
                return (-1);
        count++;
        return (count);
}

int     looping(const char *format, va_list args, int *total)
{
        int     i;

        i = 0;
        while (format[i])
        {
                if (format[i] == '%')
                {
                        i++;
                        if (format[i] == '\0')
                                return (-1);
                        if (format[i] != '\0')
                        {
                                if (format_choice(total, args, format[i]) == -1)
                                        return (-1);
                        }
                }
                else
                {
                        if (write(1, &format[i], 1) == -1)
                                return (-1);
                        (*total)++;
                }
                i++;
        }
        return (*total);
}

int     ft_printf(const char *format, ...)
{
        //int           i;
        int             total;
        va_list args;

        if (format == NULL)
                return (-1);
        total = 0;
        //i = 0;
        va_start(args, format);
        if (looping(format, args, &total) == -1)
        {
                va_end(args);
                return (-1);
        }
        return (total);
}
