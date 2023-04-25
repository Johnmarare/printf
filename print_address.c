#include "main.h"
/**
 *_print_address - printf address
 * @p: parameter
 * Return: number of characters printed
 */
int _print_address(void *p)
{
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_lower(a);
	return (b + 2);
}
