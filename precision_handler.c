#include "main.h"
/**
 * handle_precision - Matches precesion modifier with value
 * @args: Va_list argument
 * @modif: points to modifier
 * @ind: counter
 * Return: if matched, its value.
 *	   when empty, negative or zero, 0.
 *	   else -1.
 */
char handle_precision(va_list args, const char *modif, char *ind)
{
	char val = 0;

	if (*modif != '.')
		return (-1);

	modif++;
	(*ind)++;

	if ((*modif <= '0' || *modif > '9') &&
			*modif != '*')
	{
		if (*modif == '0')
			(*ind)++;
		return (0);
	}

	while ((*modif > '0' && *modif <= '9') ||
			(*modif == '*'))
	{
		(*ind)++;

		if (*modif == '*')
		{
			val = va_arg(args, int);
			if (val <= 0)
				return (0);
			return (val);
		}

		val = val * 10;
		val = val + (*modif - '0');
		modif++;
	}

	return (val);
}
