#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_conversion_specifier(char spec, va_list list);
int	ft_putnumber(int n);
int	ft_putnumber_long(unsigned int);
int	ft_char(char c);
int	ft_string(char* string);

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int ft_printf(const char *string, ...)
{
	va_list list;
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

int main(void)
{
	//int	len3 = printf("Test met flag-s: %u\n", 3147483648);
	int a = 5;
	int *b = &a;

	int	len4= printf("Test met flag-s: %p\n", b);
	
	// printf("\n");
	//printf("Test of count klopt: %d\n", len3);
	// printf("Test of count klopt: %d\n", len4);

}
