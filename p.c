#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0, printed_chars;
	va_list args;

	char buffer[1024];

	va_start(args, format);
	printed_chars = vsnprintf(buffer, sizeof(buffer), format, args);
	va_end(args);

	if (printed_chars < 0)
		return (-1);

	len = write(1, buffer, printed_chars);

	return (len);
}
