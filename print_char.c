#include "main.h"
#include <stdio.h>
/**
 * print_char - prints character
 * @c: character to be printed
 * Return: Always 0.
 */
int print_char(char c)
{
	_putchar(c);
	return (0);
}
/**
 * _printf - printf function
 * @format: list of arguments
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	char c;
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{

		if (*format == '%')/*before specifier percent*/
		{
			format++;
			switch (*format)
			{
				case 'c':/*as in character*/
					c = (char)va_arg(args, int);
					count += print_char(c);
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;

			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	/*_print_string(format);*/
	va_end(args);
	return (count);
}
