#include "main.h"

/**
* print_char - print char
* @parg: pointer to the variable argument list
* Return: Number of characters printed
*/
int print_char(va_list parg)
{
	int count = 0;

	putchar(va_arg(parg, int));
	count++;

	return (count);
}
