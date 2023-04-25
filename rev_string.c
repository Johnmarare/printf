#include "main.h"

/**
 * str_rev - function that prints string in reverse
 * @s: arguments
 * Return: the string
 */
int str_rev(char *s)
{
	int i;
	int length = 0;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)

		length++;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

	return (length);
}
