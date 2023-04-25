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
<<<<<<< HEAD
	int len = 0;

	len = _strlen(str);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
=======
	int count = 0;
>>>>>>> 66ebac15df264a135105d0eb6b61cde5c4337280

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (str[i] < 16)
<<<<<<< HEAD
				_putchar('0');
			print_hex_upper(str[i]);
=======
				count += _putchar('0');
			count += print_hex_upper(str[i]);
>>>>>>> 66ebac15df264a135105d0eb6b61cde5c4337280

		}
		else
		{
			count += _putchar(str[i]);

		}
	}
<<<<<<< HEAD
	return (len);
=======
	return (count);
>>>>>>> 66ebac15df264a135105d0eb6b61cde5c4337280
}
