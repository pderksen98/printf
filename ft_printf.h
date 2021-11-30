#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdarg.h>

int		ft_conversion_specifier(char spec, va_list list);
int		ft_putnumber(int n);
int		ft_putnumber_unsigned(unsigned int n);
int		ft_char(char c);
int		ft_string(char *string);
int		ft_putchar(char c);
int		ft_printf(const char *string, ...);
int		ft_hex(unsigned long n, char spec);
char	ft_base(int n);
char	ft_base2(int n);
int		ft_adress(void *pointer);

#endif