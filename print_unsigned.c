#include"main.h"
/**
 * print_unsigned - prints unsigned integer
 * @num: parameter
 * Return: Always 0
 */
/*UINT is maximum value of unsigned int, u can use 4294967295 but with bool*/
int print_unsigned(unsigned int num)
{
	unsigned int divisor;
	int digit;

	if (num > UINT_MAX)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (-1);
	}

	divisor = 1;
	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}

	_putchar('\n');

	return (0);
}
/*If num is within the valid range, the function then calculates the largest*/
/*power of 10 that is less than or equal to num*/
/*This power of 10 is used to extract each digit of num and print it out*/
/*The function continues extracting digits until all digits have been printed*/
