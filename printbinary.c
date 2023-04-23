#include <stdio.h>
/**
 * _printbinary - prints binary of a num
 * @val: parameter
 * Return: Always 0
 */

int _printbinary(unsigned int val)
{
	int count;
	unsigned int mod;
	unsigned int quot;

	if (val <= 0)
	{
		return (0);
	}
	mod = val % 2;
	quot = val / 2;

	count = _printbinary(quot);
	printf("%d", mod);
	return (count + 1);
}
