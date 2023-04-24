#include<stdio.h>
#include "main.h"
#include<limits.h>
/**
 * print_octal- prints octal of a number
 * @n: parameter
 * Return: Always 0
 */
int print_octal(unsigned int n)
{
	unsigned int temp = n;
	int count = 0;
	char octal_digits[100];
	int i = 0;
	int j;

	/*Convert decimal to octal using bitwise operations*/
	while (temp != 0)
	{
		octal_digits[i] = (temp % 8) + '0';
		temp /= 8;
		i++;
	}

	/*Print the octal digits in reverse order*/
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal_digits[j]);
		count++;
	}

	return count;
}
