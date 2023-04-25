#include "main.h"
/**
 * _print_address - printf address
 * @p: parameter
 * Return: number of characters printed
 */
int _print_address(void *p)
{
	char hex_digits[] = "0123456789abcdef";
	char hex[32];
	unsigned long int n = (unsigned long int)p;
	int i, count = 0;

	for (i = 0; n != 0; i++)
	{
		hex[i] = hex_digits[n % 16];
		n /= 16;
	}

	_putchar('0');
	_putchar('x');

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		count++;
	}

	_putchar('\n');
	count++;

	return count;
}
