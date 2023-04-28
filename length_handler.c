#include "main.h"
/**
 * length_handler - matches length modifiers with corresponding value
 * @modif: points to potential length modifier
 * Return: If modif is matched , value. else 0.
 *
 */

unsigned char length_handler(const char *modif)
{
	if (*modif == 'h')
	{
		return (SHORT);
	}
	else if (*modif == 'l')
	{
		return (LONG);
	}
	return (0);
}
