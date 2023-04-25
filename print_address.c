#include "main.h"
/**
 * _print_address - printf address
 * @p: parameter
 * Return: number of characters printed
 */
int _print_address(void *p)
{
	unsigned long int address = (unsigned long int) p;
	int count = 0;
	char hex[100];
	int i = 0;
	int rem;
	int j;

	count += _putchar('0');
	count += _putchar('x');

	if (address == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (address != 0)
	{
		rem = address % 16;
		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = rem - 10 + 'a';

		address /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		count++;
	}

	return (count);
}
