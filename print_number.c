#include "main.h"
/**
 * print_number - Entry point
 * @n: input
 * Return: void.
 */
int print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	return (0);
}
/**
 * _printf- printf function
 * @format: type input
 * Return: count
 */
int _printf(const char *format, ...)
{
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
				case 'd':/*as in decimal*/
					d = va_arg(args, int);
					count += print_number(d);
					break;
				case 'i':
					i = va_arg(args, int);
					count += print_number(i);
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
