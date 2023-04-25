#include "main.h"

/**
  * print_rot13 - prints string after doing rot13 conversion
  * @s: string to be converted to rot 13
  * Return: number of characters printed
  */
int print_rot13(char *s)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;						/* s loop counter */
	int j = 0;						/* s1 loop counter */
	int count = 0;
	char *str = malloc(sizeof(char) * (1 + _strlen(s)));

	if (str == NULL)
		return (0);
	str = _strcpy(str, s);
	while (str[i])
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
		i++;
	}

	/* print the rot13'ed string */
	for (i = 0; str[i] != '\0'; i++, count++)
		putchar(str[i]);

	free(str);
	str = NULL;
	return (count);
}

