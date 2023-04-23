#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _print_string - prints a string
 * @str: string to print
 *
 * Return: number of characters printed
 */
int _print_string(char *str)
{
	int i;
	int len;

	if (str == NULL)
	{
		return(-1);
	}
	len = _strlen(str);

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (len);
}
