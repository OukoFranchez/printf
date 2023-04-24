#include "main.h"
#include <unistd.h>

/**
  * switch_case - switches cases of formats
  * @c: character format
  * @parg: pointer to variable argument list
  * Return: int
  */
int switch_case(char c, va_list parg)
{
	int count = 0;

	switch (c)
	{
		case 'c':
			count += print_char(parg);
			break;
		case 's':
			count += print_string(parg);
			break;
		case '%':
			putchar('%');
			count++;
			break;
		case 'd':
		case 'i':
			count += print_int(parg);
			break;
		case 'b':
			count += print_uint(parg, 2);
			break;
		default:
			putchar('%');
			write(1, &c, 1);
			count += 2;
			break;
	}
	return (count);
}

