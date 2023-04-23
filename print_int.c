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

/**
  * print_rev - function that prints a string in reverse order
  * @s: pointer to string to be printed
  * Return: void
  */
int print_rev(char *s)
{
	int len = 0;				/* Store the strirng length */
	int i = 0;					/* loop counter */
	int count = 0;

	if (s != NULL)
	{

		len = _strlen(s);

		for (i = (len - 1); i >= 0; i--)
		{
			putchar(*(s + i));
			count++;
		}
	}
	return (count);
}

/**
  * _strlen - returns the length of the string passed
  * @s: the sting to find the length
  * Return: int length of string
  */

int _strlen(char *s)
{
	int len = 0;			/* store string length */
	int i = 0;				/* loop counter */

	while (s[i++] != '\0')
		len++;
	return (len);
}

