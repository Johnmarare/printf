#include <stdio.h>
/**
 * _printbinary - prints binary of a num
 * @val: parameter
 * Return: Always 0
 */

int _printbinary(unsigned int value)
{/*value is the number to be converted to binary*/
	int count;
	unsigned int mod;
	unsigned int quot;

	if (value <= 0)
	{/*program terminates*/
		return (0);
	}
	mod = value % 2;/*gets the last digit*/
	quot = value / 2;/*gets the first digit*/

	count = _printbinary(quot);
	printf("%d", mod);/*the value of mod is binary*/
	return (count + 1);
}
