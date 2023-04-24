#include "main.h"
/**
 * _print_address - printf address
 * @ptr: parameter
 * Return: Always 0.
 */
void _print_address(void *ptr)
{    
	char hex_digits[] = "0123456789abcdef";
	unsigned long  int n = (unsigned long int)ptr;
	char hex[16];
	int i;

	for (i = 0; i < 16; i++)
	{
		hex[i] = hex_digits[n % 16];
		n /= 16;
	}

	for (i = 15; i >= 0; i--) {
		_putchar(hex[i]);
	}
	_putchar('\n');
}
