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
	int j, i, d;/*for iterating*/
	char *s;
	char c;
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
					c = va_arg(args, int);
					putchar(c);
					count++;
					break;
				case 's':/*string*/
					s = va_arg(args, char *);
					for (j = 0; s[j] != '\0'; j++)
						putchar(*s);
					count++;
					break;
				case '%':/*percent symbol*/
					putchar('%');
					count++;
					break;
				default:
					putchar(*format);
				break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
