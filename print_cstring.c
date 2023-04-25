#include "main.h"

/**
  * print_cstring - prints a string customised for non printable characters
  * @parg: pointer to variable argument list
  * Return: number of characters printed
  */
int print_cstring(va_list parg)
{
	char *s = va_arg(parg, char *);
	int i = 0;
	int count = 0;
	unsigned int xter = 0;

	if (s == NULL)
		count += _printf("%s", "(null)");
	else
	{
		while (s[i] != '\0')
		{
			if (s[i] < 32 || s[i] >= 127)
			{
				xter = s[i];
				putchar('\\');
				putchar('x');
				count += 2;
				count += (xter < 16) ? _printf("0%X", xter) :
						_printf("%X", xter);
			}
			else
			{
				putchar(s[i]);
				count++;
			}
			i++;
		}
	}
	return (count);
}

