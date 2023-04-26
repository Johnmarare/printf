#include "main.h"
/**
 * print_number - prints number
 * @args: input
 * Return: void.
 */
int print_number(va_list args)
{
	int n;
	int num;
	int last;
	int digit;
	int  i = 1;
	int exp = 1;

	n = va_arg(args, int);
	last = n % 10;
	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
