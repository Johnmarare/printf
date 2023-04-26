	Custom printf

		Name: _printf

	Prototype: int _printf(const char *format, ...);

The real power of printf is when we are printing the contents of variables - 
Professor Don Colton

Handles different conversion specifiers:
. c - prints a character. i.e _printf("%c", 'A');
. s - prints a string. i.e. _printf("%s", "Hello World!");
. % - prints a percent. i.e _printf("20%%");
. d - prints intrgers. i.e _printf("%d", 20);
. i - prints signed integers. i.e _printf("%i", 1234567890);
. b - the unsigned int argument is converted to binary
. u - prints unsigned integers
. o - prints octal
. x - prints hexadecimal lowercase
. X - prints hexadecimal uppercase
. R - print a string encoded in rot13 format
. S - custom conversion specifier, prints string
. r - prints the reversed string
