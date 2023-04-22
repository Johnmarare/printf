#include "main.h"
#include<stdio.h>
/**
 * _printf - function
 * @format: contains types of arguments
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int j, i, d;/*for iterating*/
	va_list args;

	va_start(args, format);
			switch (*format)
			{
				case 'i':
					i = va_arg(args, int);
					putchar(i);
					break;
				case 'd':
					d = va_arg(args, int);
					putchar(d);
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
