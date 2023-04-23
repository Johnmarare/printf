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


int main(void)
{
	int count;
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	count = _printf("Character:[%c]\n", 'H');
	_printf("Count:[%d]\n", count);

	count = _printf("Hello, world!\n");
	_printf("Count:[%d]\n", count);

	count = _printf("Integer:[%d]\n", 12345);
	_printf("Count:[%d]\n", count);

	count = _printf("Float:[%f]\n", 3.14159);
	_printf("Count:[%d]\n", count);

	count = _printf("Percent:[%%]\n");
	_printf("Count:[%d]\n", count);

	return (0);
}
