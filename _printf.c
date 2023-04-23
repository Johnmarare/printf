#include "main.h"
#include<stdlib.h>
/**
 * _printf - printf function
 * @format: list of arguments
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	char c;
	char *s;
	int i, d;
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
				case 'd':/*as in decimal*/
					d = va_arg(args, int);
					count += print_number(d);
					break;
				case 'i':
					i = va_arg(args, int);
					count += print_number(i);
					break;
				case 's':
					s = va_arg(args, char *);
					count += _print_string(s);
					break;
				case '%':
					_putchar('%');
					count++;
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
