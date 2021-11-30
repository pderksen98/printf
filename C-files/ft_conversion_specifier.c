#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_conversion_specifier(char spec, va_list list)
{
	if (spec == 'i' || spec == 'd')
		return (ft_putnumber(va_arg(list, int)));
	else if (spec == 'u')
		return (ft_putnumber_unsigned(va_arg(list, unsigned int)));
	else if (spec == 'c')
		return (ft_char(va_arg(list, int)));
	else if (spec == 's')
		return (ft_string(va_arg(list, char *)));
	else if (spec == 'x' || spec == 'X')
		return (ft_hex(va_arg(list, unsigned int), spec));
	else if (spec == 'p')
		return (ft_adress(va_arg(list, void *)));
	else if (spec == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
