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

	printf("%p", ptr);
	count += sizeof(void *);

	return (count);
}

