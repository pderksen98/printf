#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_putnumber_long(unsigned int x)
{
	int				count;
	char			c;

	count = 0;
	if (x >= 10)
	{
		count += ft_putnumber_long(x / 10);
		count += ft_putnumber_long(x % 10);
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
	int long long	x;
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
