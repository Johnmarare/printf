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
	unsigned int b;
	unsigned int u;
	unsigned int o;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
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
				case 'i':/*signed integer*/
					i = va_arg(args, int);
					count += print_number(i);
					break;
				case 'b':/*integer to binary*/
					b = va_arg(args, unsigned int);
					count += _printbinary(b);
					break;
				case 'u':
					u = va_arg(args, unsigned int);
					count += print_unsigned(u);
					break;
				case 'o':
					o = va_arg(args, unsigned int);
					count += print_octal(o);
					break;
				case 's':/*string*/
					s = va_arg(args, char *);
					if (s == NULL)
						return (-1);
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
