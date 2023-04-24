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
