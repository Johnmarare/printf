#include"main.h"
/**
 * handle_S_conversion - Helper function to handle %S conversion specifier
 *
 * @str: The string to be printed
 */

void handle_S_conversion(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
				_putchar('0');
			printf("%X", str[i]);
		}
		else
		{
			_putchar(str[i]);
		}

		i++;
	}
}
