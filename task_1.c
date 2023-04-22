#include "main.h"
#include<stdio.h>
/**
 * _printf - function
 * @format: contains types of arguments
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int count = 0;/*stores count*/
	int i;
	int d;/*for iterating*/
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')/*before specifier percent*/
		{
			format++;
			switch (*format)
			{

				case 'i':
					i = va_arg(args, int);
					putchar(i);
					count++;
					break;
				case 'd':
					d = va_arg(args, int);
					putchar(d);
					count++;
					break;

				default:

					break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
