#include "main.h"
/**
 * handle_width - matches a width modifier with corresponding value
 * @args: va_list argument
 * @modif: points to width modifier
 * @ind: counter of original format string
 * Return: when matched, its value, else 0.
 */

char handle_width(va_list args, const char *modif, char *ind)
{
	char val = 0;

	while ((*modif > '0' && *modif <= '9') || (*modif == '*'))
	{
		(*ind)++;

		if (*modif == '*')
		{
			val = va_arg(args, int);
			if (val <= 0)
			{
				return (0);
			}
			return (val);
		}

		val = val * 10;
		val = val + (*modif - '0');
		modif++;
	}
	return (val);
}

