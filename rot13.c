#include "main.h"
/**
 * print_rot13 - print string in ROT13
 * @s:  parameter
 * Return: count
 *
 */
int print_rot13(char *s)
{
	int i, j, count, k = 0;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";/*input*/
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";/*output*/

	for (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)/*26x 2 alphabets both upper and lower*/
		{
			if (a[j] == s[i])
			{
				_putchar(b[j])/*encodes it*/
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
}
