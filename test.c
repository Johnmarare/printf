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
	int j;/*for iterating*/
	char *s;
	int i, d;
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (format[j] != '%')
			_putchar(format[j]);
		else if (format[j + 1] == 'c')
		{
			c = va_arg(args, int);
			count += print_char(c);
			j++;
		}
		else if (format[j + 1] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				return (-1);
			count += _print_string(s);
			j++;
		}
		else if (format[j + 1] == 'd')
		{
			d = va_arg(args, int);
			count += print_number(d);
			j++;
		}
		else if (format[j + 1] == 'i')
		{
			i = va_arg(args, int);
			count += print_number(i);
			j++;
		}
		else if (format[j + 1] == '%')
		{
			count += _putchar('%');
			j++;
		}
		else
		{
			count+= _putchar(format[j]);
			j++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
