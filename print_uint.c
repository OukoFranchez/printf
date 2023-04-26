#include "main.h"

/**
 * print_uint - prints an unsigned int in base format
 * @parg: pointer to variable argument list
 * @base: the base at which the int is printed
 * Return: number of characters printed
*/
int print_uint(va_list parg, int base)
{
	unsigned int n = va_arg(parg, unsigned int);
	int count = 0;
	char uint[33] = {'0'};
	int i = 0;
	int mod = 0;

	if (n == 0)
	{
		putchar('0');
		return (1);
	}
	while (n > 0)
	{
		mod = n % base;
		uint[i] = (mod <= 9) ? ('0' + mod) : ('a' + (mod - 10));
		n /= base;
		i++;
	}
	uint[i] = '\0';

	count += print_rev(uint);

	return (count);
}
