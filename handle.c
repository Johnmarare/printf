#include "main.h"
#include <stdio.h>
/**
 * handle_S_conversion - handles conversion
 * @str: parameter
 * Return: void
 */
int handle_S_conversion(char *str)
{
	int i = 0;
	int len = 0;

	len = _strlen(str);
	if (str == NULL)
	{
		str = "(NULL)";
	for (i = 0; i < len; i++)
		_putchar(str[i]);
			return (len);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
				_putchar('0');
			print_hex_upper(str[i]);

		}
		else
		{
			_putchar(str[i]);

		}
		i++;
	}
	return (len);
}
