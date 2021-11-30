#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_putnumber_unsigned(unsigned int n)
{
	long			x;
	int				count;
	char			c;

	x = n;
	count = 0;
	if (x >= 10)
	{
		count += ft_putnumber_unsigned(x / 10);
		count += ft_putnumber_unsigned(x % 10);
	}
	else
	{
		c = x + '0';
		count += write(1, &c, 1);
	}
	return (count);
}

int	ft_putnumber(int n)
{
	long			x;
	int				count;
	char			c;

	count = 0;
	x = n;
	if (x < 0)
	{
		count += write(1, "-", 1);
		x *= -1;
	}
	if (x >= 10)
	{
		count += ft_putnumber(x / 10);
		count += ft_putnumber(x % 10);
	}
	else
	{
		c = x + '0';
		count += write(1, &c, 1);
	}
	return (count);
}
