#include"main.h"
/**
 * print_hex- prints hexadecimal  of a number in lowercase
 * @n: parameter
 * Return: Always 0
 */
int print_hex(unsigned int n)
{
	char hex[100];
	int i = 0;
	int j;
	int remainder;

	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex[i] = remainder + '0';
		else
			hex[i] = remainder - 10 + 'a';
		n /= 16;
		i++;
	}

	if (i == 0)
		_putchar('0');
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
		}
	}

	return (0);
}
