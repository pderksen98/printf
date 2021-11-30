#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_adress(void *pointer)
{
	unsigned long	x;

	x = (unsigned long)pointer;
	write(1, "0x", 2);
	return (2 + ft_hex(x, 'x'));
}
