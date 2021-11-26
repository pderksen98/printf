#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_string(char* string)
{
	int	count;

	count = 0;
	while(*string)
	{
		count += write(1, &string[0], 1);
		string++;
	}
	return (count);
}
