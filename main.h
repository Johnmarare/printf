#ifndef MAIN_H
#define MAIN_H

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<math.h>

/*flag modifier macros*/
#define PLUS 1
#define SPACE 2
#define HASH 4
#define ZERO 8
#define NEG 16
#define PLUS_FLAG (flags & 1)
#define SPACE_FLAG ((flags >> 1) & 1)
#define HASH_FLAG ((flags >> 2) & 1)
#define ZERO_FLAG ((flags >> 3) & 1)
#define NEG_FLAG ((flags >> 4) & 1)

/* Length modifiers macros*/
#define SHORT 1
#define LONG 2


/**
 * struct format - match the conversion specifiers for printf
 * @op: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
	char *op;
	int (*f)();
} found_match;


/**
 * struct flag_s - A new type defining a flags struct.
 * @flag: A character representing a flag.
 * @value: The integer value of the flag.
 */
typedef struct flag_s
{
	unsigned char flag;
	unsigned char value;
} flag_t;


/**
 * struct buffer_s - A new type defining a buffer struct.
 * @buffer: A pointer to a character array.
 * @start: A pointer to the start of buffer.
 * @len: The length of the string stored in buffer.
 */
typedef struct buffer_s
{
	char *buffer;
	char *start;
	unsigned int len;
} buff_t;


int _printf(const char *format, ...);
int print_number(va_list args);
int _putchar(char c);
int print_char(va_list args);
int _print_string(va_list args);
int _strlen(char *s);
int _printbinary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int handle_S_conversion(va_list args);
int _print_hex(unsigned long int num);
int str_rev(va_list args);
int _print_address(va_list args);
int print_rot13(va_list args);
int print_percent(void);

unsigned char handle_flags(const char *flags);
unsigned char length_handler(const char *modif);
char handle_width(va_list args, const char *modif, char *ind);

#endif
