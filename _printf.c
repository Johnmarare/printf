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
	int i, j, d;
	int count = 0;
	unsigned int b, u, o, x, X;
	/*void *ptr;*/
	va_list args;

	j = 0;
	va_start(args, format);
	if (format == NULL || format[j] == '\0') 
		return (-1);
	while (format[j] != '\0')
	{

		if (format[j] == '%')/*before specifier percent*/
		{
			j++;
			switch (format[j])
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
				case 'x':
					x = va_arg(args, unsigned int);
					count += print_hex_lower(x);
					break;
				case 'X':
					X = va_arg(args, unsigned int);
					count += print_hex_upper(X);
					break;
				case 's':/*string*/
					s = va_arg(args, char *);
					if (s == NULL)
						return (-1);
					count += _print_string(s);
					break;
				case 'S':
					handle_S_conversion(va_arg(args, char *));
					break;
				/*case 'p': 

					*ptr = va_arg(args, void *);
					count += sizeof(void *) * 2 + 2; 
					break;*/
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					count += _putchar('%');
					count += _putchar(format[j]);
					break;

			}
		}
		else
		{
			count += _putchar(format[j]);
		}
		j++;
	}
	/*_print_string(format);*/
	va_end(args);
	return (count);
}
