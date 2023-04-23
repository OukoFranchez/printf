#include "main.h"

/**
* print_string - prints string
* @parg: pointer to variable argument list
* Return: Number of characters printed
*/
int print_string(va_list parg)
{
	char *s = va_arg(parg, char *);
	int count = 0;

	if (s == NULL)
	{
		count += _printf("%s", "(null)");
	}

	else
	{
		while (*s != '\0')
		{
			putchar(*s);
			s++;
			count++;
		}
	}

	return (count);
}
