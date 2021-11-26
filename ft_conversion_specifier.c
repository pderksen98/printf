#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_putnumber(int n);
int ft_putnumber_long(unsigned int);
int	ft_char(char c);
int	ft_string(char* string);

int    ft_conversion_specifier(char spec, va_list list)
{
    if (spec == 'i' || spec == 'd')
        return(ft_putnumber(va_arg(list, int)));
    if (spec == 'u')
        return(ft_putnumber_long(va_arg(list, unsigned int)));
    if (spec == 'c')
        return(ft_char(va_arg(list, int)));
    if (spec == 's')
        return(ft_string(va_arg(list, char*)));
    return (0);
}
