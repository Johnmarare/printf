#include "main.h"
/**
 *_print_address - prints address
 * @p: parameter
 * Return: number of characters printed
 */
int _print_address(void *p)
{
	unsigned long int address = (unsigned long int) p;
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');
	count += print_hex_lower(address);

	return (count);
}
