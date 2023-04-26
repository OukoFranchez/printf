#include "main.h"
/**
 * print_pointer - it prints pointer to void as the memory address
 * @parg: pointer to the variable argument list
 * Return: Number of characters printed
 */
int print_pointer(va_list parg)
{
	int count = 0;
	void *ptr = va_arg(parg, void *);

	if (ptr == NULL)
		return (0);
	count += printf("%p", ptr);

	return (count);
}

