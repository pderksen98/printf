#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_hex(unsigned long n, char spec)
{
	int				count;
	char			c;

	count = 0;
	if (n >= 16)
	{
		count += ft_hex((n / 16), spec);
		count += ft_hex((n % 16), spec);
	}
	else
	{
		if (spec == 'x')
			c = ft_base(n);
		else
			c = ft_base2(n);
		count += write(1, &c, 1);
	}
	return (count);
}

char	ft_base(int n)
{
	char	c;
	char	*line;

	line = "0123456789abcdef";
	c = line[n];
	return (c);
}

char	ft_base2(int n)
{
	char	c;
	char	*line;

	line = "0123456789ABCDEF";
	c = line[n];
	return (c);
}
