#include "main.h"
#include <unistd.h>

/**
  * switch_case2 - switches cases of formats
  * @c: character format
  * @parg: pointer to variable argument list
  * Return: int
  */
int switch_case2(char c, va_list parg)
{
	int count = 0;

	switch (c)
	{
		case 'p':
			count += print_uint(parg, 16);
			break;
		case 'S':
			count += print_cstring(parg);
			break;
		default:
			putchar('%');
			putchar(c);
			count += 2;
			break;
	}
	return (count);
}

