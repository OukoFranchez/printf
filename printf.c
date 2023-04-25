#include "main.h"

/**
  * _printf - prints formatted string to standard output
  * @format: the formatted string
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list parg;                      /* pointer to variable argument list */

	if (format == NULL)
		return (-1);

	if (!format)
		return (0);
	va_start(parg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			count += switch_case(format[i], parg);
			i++;
		}
		else
		{
			putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(parg);
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
