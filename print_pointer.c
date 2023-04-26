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
	{
		char *null_str = "(nil)";

		count += printf("%s", null_str);
	}
	else
	{
		/* assuming a 64-bit system */
		char *string_address = malloc(sizeof(char) * (18));

		if (string_address == NULL)
			return (0);

		/* converting the address to string format */
		sprintf(string_address, "0x%lx", (unsigned long)ptr);
		count += printf("%s", string_address);
		free(string_address);
	}

	return (count);
}

