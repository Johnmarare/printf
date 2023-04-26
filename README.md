	Custom printf

		Name: _printf
What is printf? printf is the C language function to do format-ted printing.
		The same function is also available in PERL.-  
Secrets of “printf” by Professor Don Colton.

	Prototype: int _printf(const char *format, ...);

This prototype is an implementation of the printf standard function and variadic function 

The real power of printf is when we are printing the contents of variables - 
Professor Don Colton

 how does printf works?

In the most simple case, printf takes one argument:a string of characters to be printed. This string iscomposed of characters, each of which is printed ex-actly as it appears.- Secrets of "printf"

		Description.

The function _printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output

		Return:
Upon success,
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
