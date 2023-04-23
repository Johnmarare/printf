#include "main.h"
/**
 * print_number - Entry point
 * @n: input
 * Return: void.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
/*
int main (void)
{
	print_number(7);
	_printf("\n");
	print_number(1234567890);
	_printf("\n";
	return (0);
}*/
