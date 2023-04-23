#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
/**
 * _print_string - prints a string
 * @str: string to print
 *
 * Return: number of characters printed
 */
int _print_string(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	return (len);
}
