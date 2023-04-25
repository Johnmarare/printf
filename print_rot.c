#include "main.c"
/**
 * print_rot - prints rot13
 * @str: string passed
 * Return: returns number of characters passed
 */

int print_rot(char *str)
{
	int i;
	int j;
	int count = o;
	char rota[] = {abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ};
	char rotb[] = {nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM};


	if (str == NULL)
		s = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == rota[j])
			{
				str[i] = rotb[j];
				count++;
				break;
			}
		}
	}
	return (count);
}

