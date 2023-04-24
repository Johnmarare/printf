#include <stdio.h>
#include "main.h"
#include<limits.h>
/**
 * print_unsigned - prints unsigned integer
 * @num: parameter
 * Return: Always 0
 */

/*Check if num is within the range of valid unsigned int values*/
/*UINT is maximum value of unsigned int, u can use 4294967295 but with bool*/
int print_unsigned(unsigned int num)
{
	unsigned int sum;

	/* Check if num is negative */
	if ((int)num < 0)
	{
		printf("Error\n");
		return (-1);
	}

	/* Check if num is within the range of valid unsigned int values */
	if (num > UINT_MAX)
	{
		printf("Error\n");
		return (-1);
	}

	/* Check for arithmetic overflow */
	sum = num + 1;
	if (sum < num)
	{
		printf("Error\n");
		return (-1);
	}

	/* Check for undefined behavior in bitwise shifts */
	if (num >= sizeof(unsigned int) * CHAR_BIT)
	{
		printf("Error\n");
		return (-1);
	}

	printf("%u\n", num);
	return (0);
}
