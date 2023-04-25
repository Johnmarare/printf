#include "main.h"
/**
 * rot13 -  encodes a string using rot13.
 *@str: function parameter
 * Return: Always 0.
 */
int print_rot13(char *str)
{
	int i, k, j, count = 0;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";/*input*/
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";/*output*/

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)/*26x 2 alphabets both upper and lower*/
		{
			if (a[j] == str[i])
			{
				_putchar(b[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
