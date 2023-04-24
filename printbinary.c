#include "main.h"
#include <stdio.h>
/**
 * _printbinary - prints binary of a num
 * @value: parameter
 * Return: Always 0
 */
int _printbinary(unsigned int value)
{/*value is the number to be converted to binary*/
	int count = 0;
	unsigned int mod;
	unsigned int quot;

	if (value <= 0)
	{
		return (0);
	}
	mod = value % 2;
	quot = value / 2;

	count = _printbinary(quot);
	_putchar(mod + '0');/*Use putchar instead of print*/
	return (count + 1);
}
