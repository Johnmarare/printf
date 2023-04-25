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
	int count = 0;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (str[i] < 16)
				/*count += _putchar('0');*/
			count += print_hex_upper(str[i]);

		}
		else
		{
			count += _putchar(str[i]);

		}
	}
	return (count);
}
