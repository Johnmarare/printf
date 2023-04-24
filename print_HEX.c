#include<stdio.h>
#include "main.h"
#include<limits.h>
/**
 * print_HEX - prints hexadecimal  of a number in uppercase
 * @n: parameter
 * Return: Always 0
 */
int print_HEX(unsigned int n)
{
	char hex[100];
	int i = 0;
	int remainder;
	int j;

	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex[i] = remainder + '0';
		else
			hex[i] = remainder - 10 + 'A';/*Use for uppercase*/
		n /= 16;
		i++;
	}

	if (i == 0)
		_putchar('0');
	else
	{
		for (j = i - 1; j >= 0; j--)
			_putchar(hex[j]);
	}

	return (0);
}
