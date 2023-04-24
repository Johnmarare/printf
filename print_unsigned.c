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
	/*Check if num is within the range of valid unsigned int values*/
	if (num > UINT_MAX)
	{
		printf("Error\n");
		return (-1);
	}

	printf("%u\n", num);
	return (0);
}
