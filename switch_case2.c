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
	char *str = NULL;

	switch (c)
	{
		case 'p':
			count += print_pointer(parg);
			break;
		case 'S':
			count += print_cstring(parg);
			break;
		case 'R':
			str = va_arg(parg, char *);
			if (str == NULL)
				count += _printf("%s", "(null)");
			else
				count += print_rot13(str);
			break;
		case 'r':
			str = va_arg(parg, char *);
			if (str == NULL)
				count += _printf("%s", "(null)");
			else
				count += print_rev(str);
			break;
		default:
			putchar('%');
			putchar(c);
			count += 2;
			break;
	}
	return (count);
}

