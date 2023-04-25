#include "main.c"
/**
 * print_rot13 - prints rot13
 * @str: string passed
 * Return: returns number of characters passed
 */

int print_rot13(char *str)
{
	int i;
	int j;
	int k = 0;
	int count = 0;
	char rota[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotb[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	if (str == NULL)
		str = "(null)";
	for (j = 0; a[j] && !k; j++)/*26x 2 alphabets both upper and lower*/
	{
		if (a[j] == s[i])
		{
			_putchar(b[j]);
			count++;
			k = 1;
		}
	}
	if (!k)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
