#include "main.h"
#include <stdio.h>
/**
 * _printbinary - prints binary of a num
 * @value: parameter
 * Return: Always 0
 */
int _printbinary(unsigned int value)
{/*value is the number to be converted to binary*/
	int flag = 0;
	int cont = 0;
	int i;
	unsigned int num;
	unsigned int p;

	for (i = 31 ; i >= 0 ; i--)
	{
		p = (num >> i) & 1;
		if (p || flag)
		{
			flag = 1;
			_putchar(p + '0');
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
