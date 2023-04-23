#include <stdio.h>

int _printbinary(unsigned int val)
{
	int count;
	unsigned int mod;
	unsigned int quot;

	if (val <= 0)
	{
		//putchar('0');
		return (0);
	}
	mod = val % 2;
	quot = val / 2;

	count = _printbinary(quot);
	printf("%d", mod);
	return (count + 1);
}

int main(void)
{
	_printbinary(129887);
	printf("\n");
	return (0);
}
