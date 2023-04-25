#ifndef MAIN_H
#define MAIN_H
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include <stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<math.h>
int _printf(const char *format, ...);
int print_number(int n);
int _putchar(char c);
int print_char(char c);
int _print_string(char *str);
int _strlen(char *s);
int _printbinary( unsigned int value);
int print_unsigned(unsigned int num);
int print_octal(unsigned int n);
int print_hex(unsigned int num);
int print_HEX(unsigned int num);
void print_string(char *str);
void handle_S_conversion(char *str);
#endif
