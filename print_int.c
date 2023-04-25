#include "main.h"

/**
  * print_int - prints an integer to standard output
  * @parg: pointer to variable argument list
  * Return: number of integers printed
  */
int print_int(va_list parg)
{
	int num = va_arg(parg, int);
	unsigned int num_copy = num;
	int sign = 0, i = 0;
	int base = 10, quotient = 0;
	char temp[20] = {0};
	int count = 0;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	if (num < 0)
	{
		sign = 1;
		num_copy *= -1;
	}
	/* printf("%d\n", num_copy); */
	while (num_copy)
	{
		quotient = num_copy % base;
		temp[i] = (quotient > 9) ? ('A' + quotient - 10) : (quotient + '0');
		num_copy /= base;
		i++;
	}
	if (sign)
		temp[i++] = '-';
	temp[i] = '\0';
	count = print_rev(temp);
	return (count);
}
