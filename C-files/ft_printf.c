#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printf(const char *string, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, string);
	while (*string)
	{
		if (*string == '%')
		{
			count += ft_conversion_specifier(string[1], list);
			string = string + 2;
		}
		else
		{
			count += ft_putchar(string[0]);
			string++;
		}
	}
	va_end(list);
	return (count);
}
