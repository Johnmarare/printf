#include "main.h"
/*- flag is used to left align an output, by default output is right aligned*/

/**
 * handle_d_conversion - handles d conversion specifier
 * @n: parameter
 * @left_align: whether or not to left-align the output
 * Return: number of characters printed
 */
int handle_d_conversion(int n, int left_align)
{
	int num;
	char buffer[12];
	int len = 0;
	int i;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		len++;
	}

	do {
		buffer[len++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);

	if (left_align)
	{
		for (i = len; i < 12; i++)
			_putchar(' ');
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(buffer[i]);

	if (!left_align)
	{
		for (i = len; i < 12; i++)
			_putchar(' ');
	}

	return (len);
}
