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
	char binary[33] = {'0'};
	int i = 0;

	if (n == 0)
	{
		putchar('0');
		return (1);
	}
	while (n > 0)
	{
		binary[i] = '0' + (n % base);
		n /= base;
		i++;
	}
	binary[i] = '\0';

	count += print_rev(binary);

	return (count);
}
