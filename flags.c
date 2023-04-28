#include "main.h"
/**
 * handle_flags - Matches a flag with corrresponding value
 * @flag: points to flag
 * Return: value to matched flag else 0.
 */

unsigned char handle_flags(const char *flag)
{
	int i;
	int j;

	unsigned char count = 0;
	flag_t flags[] = {
		{'+', PLUS},
		{' ', SPACE},
		{'#', HASH},
		{'0', ZERO},
		{'-', NEG},
		{0, 0}
	};

	for (i = 0; flag[i]; i++)
	{
		for (j = 0; flags[j].flag != 0; j++)
		{
			if (flag[i] == flags[j].flag)
			{
				if (count == 0)
				{
					count = flags[j].value;
				}
				else
				{
					count = count | flags[j].value;
				}
				break;
			}
		}
		if (flags[j].value == 0)
		{
			break;
		}
	}
	return (count);
}
